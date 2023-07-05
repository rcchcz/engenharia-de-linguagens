%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <ctype.h>
	#include "./lib/record.h"

	int yylex(void);
	int yyerror(char *s);
	int yywrad();

	extern int yylineno;
	extern char * yytext;
	extern FILE * yyin, * yyout;

	char * cat(char *, char *, char *, char *, char *);

	void add(char symbol, char * id_name);
	void insert_type(char * type_text);
	int search(char *c);
	void insert_value(char * id, char * value);

	struct dataType {
		char * id_name;
		char * data_type;
		char * type;
		int line_no;
		int scope;
	} symbol_table[40];

	int count = 0;
	int q;
	char type[10];
	extern int countn;
	extern int count_block;
%}

%union {
	int    iValue; 	/* integer value */
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	float  fValue;  /* float value */
	double dvalue;  /* double value */ 
	struct record * rec;
};

%token <sValue> ID
%token <sValue> INT_NUMBER
%token <sValue> FLOAT_NUMBER
%token <sValue> STRING_VALUE
%token INT DOUBLE FLOAT CHAR STRING BOOLEAN NULL_VALUE VOID STRUCT ENUM TRUE FALSE
%token WHILE DO SWITCH CASE DEFAULT IF ELSE ELSE_IF FOR CONTINUE BREAK CONST STATIC RETURN MAIN SCAN PRINT
%token OPEN_PAREN CLOSE_PAREN OPEN_BRACK CLOSE_BRACK BLOCK_BEGIN BLOCK_END SEMI COLON DOT COMMA AMPERSAND
%token PLUS MINUS DIV MULT INCREMENT DECREMENT MODULE ASSIGN ADD_ASSIGN SUB_ASSIGN
%token EQ NEQ LT GT LE GE
%token AND OR NOT

%type <rec> decs_var subprograms principal dec_var assigns type ids p_values dims type_modifiers
%type <rec> type_modifier atomo value expr term factor function_call assign_def assign_mat
%type <rec> subprogram proc function params stmts param stmt conditional_stmt iteration_stmt
%type <rec> if_stmt switch_stmt logic_expr else_if_stmt logic_op c_term comp comp_op 
%type <rec> switch_cases while_stmt for_stmt dowhile_stmt args arg print_content print_stmt scan_stmt

%start prog


%% /* Inicio da segunda seção, onde colocamos as regras BNF */

prog : decs_var subprograms principal subprograms { fprintf(yyout, "%s\n%s\n%s\n%s", $1->code, $2->code, $3->code, $4->code);
	 									freeRecord($1);
										freeRecord($2);
										freeRecord($3);
										freeRecord($4);
	 								  }
	 | decs_var principal subprograms { fprintf(yyout, "%s\n%s\n%s", $1->code, $2->code, $3->code);
	 									freeRecord($1);
										freeRecord($2);
										freeRecord($3);
	 								  }
	 | decs_var subprograms principal { fprintf(yyout, "%s\n%s\n%s", $1->code, $2->code, $3->code);
	 									freeRecord($1);
										freeRecord($2);
										freeRecord($3);
	 								  }
	 | decs_var principal { fprintf(yyout, "%s\n%s", $1->code, $2->code);
							freeRecord($1);
	 						freeRecord($2);
	 					  }
	 ;

decs_var : 				 	{$$ = createRecord("","");}
		 | dec_var decs_var {char *s = cat($1->code, $2->code,"","","");
		 					 freeRecord($1);
							 freeRecord($2);
							 $$ = createRecord(s, "");
							 free(s);
		 					}
		 | assigns {char *s = cat($1->code, "", "", "","");
					freeRecord($1);
					$$ = createRecord(s, "");
					free(s);
		 		   }
		 ;

dec_var : type ids SEMI {	add('V', $2->code);
							char *s = cat($1->code, " ", $2->code, ";","");
						  	freeRecord($1);
						  	freeRecord($2);
						  	$$ = createRecord(s, "");
						  	free(s);
						}
		| type ID ASSIGN p_values SEMI  { 	add('V', $2);
											char *s1 = cat($1->code, " ", $2, "=", $4->code);
											char *s2 = cat(s1, ";", "", "", "");
											freeRecord($1);
											freeRecord($4);
											$$ = createRecord(s2, "");
											free(s2);
											free(s1);
										}
		| type ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI { add('V', $2);
																	char *s1 = cat($1->code, " ", $2, $3->code, "=");
																	char *s2 = cat(s1, "{", $6->code, "}", ";");
																  	freeRecord($1);
																	freeRecord($3);
																	freeRecord($6);
																	$$ = createRecord(s2, "");
																	free(s2);
																	free(s1);
																  }
		| type ID dims SEMI {	add('V', $2);
								char *s = cat($1->code, " ", $2, $3->code, ";");
								freeRecord($1);
								freeRecord($3);
								$$ = createRecord(s, "");
								free(s);
							}
		| type_modifiers type ids SEMI {	add('V', $3->code);
											char *s1 = cat($1->code, " ", $2->code, " ", $3->code);
											char *s2 = cat(s1, ";", "", "", "");
											freeRecord($1);
											freeRecord($2);
											freeRecord($3);
											$$ = createRecord(s2, "");
											free(s2);
											free(s1);
									   }
        | type_modifiers type ID ASSIGN p_values SEMI {	add('V', $3);
														char *s1 = cat($1->code, " ", $2->code, " ", $3);
														char *s2 = cat(s1, "=", $5->code, ";", "");
														freeRecord($1);
														freeRecord($2);
														freeRecord($5);
														$$ = createRecord(s2, "");
														free(s2);
														free(s1);
													  }
		| type_modifiers type ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI {	add('V', $3);
																					char *s1 = cat($1->code, " ", $2->code, "", $3);
																					char *s2 = cat(s1, $4->code, "=", "{", $7->code);
																					char *s3 = cat(s2, "}", ";", "", "");
																					freeRecord($1);
																					freeRecord($2);
																					freeRecord($4);
																					freeRecord($7);
																					$$ = createRecord(s3, "");
																					free(s3);
																					free(s2);
																					free(s1);
																				 }
		| type_modifiers type ID dims SEMI {	add('V', $3);
												char *s1 = cat($1->code, " ", $2->code, " ", $3);
												char *s2 = cat(s1, $4->code, ";", "", "");
												freeRecord($1);
												freeRecord($2);
												freeRecord($4);
												$$ = createRecord(s2, "");
												free(s2);
												free(s1);
										   }
		| type MULT ID ASSIGN p_values SEMI {	add('V', $3);
												char *s1 = cat($1->code, " *", $3, "=", $5->code);
												char *s2 = cat(s1, ";", "", "", "");
												freeRecord($1);
												freeRecord($5);
												$$ = createRecord(s2, "");
												free(s2);
												free(s1);
											}
		| type MULT ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI {add('V', $3);
																		char *s1 = cat($1->code, " *", $3, $4->code, "=");
																		char *s2 = cat(s1, "{", $7->code, "}", ";");
																		freeRecord($1);
																		freeRecord($4);
																		freeRecord($7);
																		$$ = createRecord(s2, "");
																		free(s2);
																		free(s1);
																	   }
		| type MULT ID dims SEMI {	add('V', $3);
									char *s = cat($1->code, " *", $3, $4->code, ";");
									freeRecord($1);
									freeRecord($4);
									$$ = createRecord(s, "");
									free(s);
								 }
		| type_modifiers type MULT ID ASSIGN p_values SEMI {	add('V', $4);
																char *s1 = cat($1->code, " ", $2->code, " *", $4);
																char *s2 = cat(s1, "=", $6->code, ";", "");
																freeRecord($1);
																freeRecord($2);
																freeRecord($6);
																$$ = createRecord(s2, "");
																free(s2);
																free(s1);
														   }
		| type_modifiers type MULT ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI {	add('V', $4);
																						char *s1 = cat($1->code, " ", $2->code, " *", $4);
																						char *s2 = cat(s1, $5->code, "=", "{", $8->code);
																						char *s3 = cat(s2, "}", ";", "", "");
																						freeRecord($1);
																						freeRecord($2);
																						freeRecord($5);
																						freeRecord($8);
																						$$ = createRecord(s3, "");
																						free(s3);
																						free(s2);
																						free(s1);
																					  }
		| type_modifiers type MULT ID dims SEMI {	add('V', $4);
													char *s1 = cat($1->code, " ", $2->code, " *", $4);
													char *s2 = cat(s1, $5->code, ";", "", "");
													freeRecord($1);
													freeRecord($2);
													freeRecord($5);
													$$ = createRecord(s2, "");
													free(s2);
													free(s1);
												}
		| type_modifier STRUCT ID BLOCK_BEGIN decs_var BLOCK_END SEMI {	add('V', $3);
																		char *s1 = cat($1->code, " struct ", $3, " {\n", $5->code);
																		char *s2 = cat(s1, "\n};", "", "", "");
																		freeRecord($1);
																		freeRecord($5);
																		$$ = createRecord(s2, "");
																		free(s2);
																		free(s1);
																	  }
		| STRUCT ID BLOCK_BEGIN decs_var BLOCK_END SEMI {	add('V', $2);
															char *s = cat("struct ", $2, " {\n", $4->code, "\n};");
															freeRecord($4);
															$$ = createRecord(s, "");
															free(s);
														}
		| type_modifier STRUCT ID BLOCK_BEGIN BLOCK_END SEMI {	add('V', $3);
																char *s = cat($1->code ," struct ", $3 ," {", "};");
																freeRecord($1);
																$$ = createRecord(s, "");
																free(s);
															 }
		| STRUCT ID BLOCK_BEGIN BLOCK_END SEMI {add('V', $2);
												char *s = cat("struct", $2 ,"{};", "", "");
												$$ = createRecord(s, "");
												free(s);
											   }
		;

type_modifiers : type_modifier {	char *s = cat($1->code, "", "", "", "");
									freeRecord($1);
									$$ = createRecord(s, "");
									free(s);
							   }
			   | type_modifier type_modifier {	char *s = cat($1->code, " ", $2->code, "", "");
												freeRecord($1);
												freeRecord($2);
												$$ = createRecord(s, "");
												free(s);
			   								 }
			   ;

type_modifier : CONST {	$$ = createRecord("const", "");
					  }
              | STATIC {$$ = createRecord("static", "");
			  		  }
			  | ENUM {	$$ = createRecord("enum", "");
			  		 }
			  | STRUCT {$$ = createRecord("struct", "");
			  		   }
			  ;

type : INT {insert_type("int");
			$$ = createRecord("int", "");
		   }
     | DOUBLE {	insert_type("double");
				$$ = createRecord("double", "");
	 		  }
	 | FLOAT {	insert_type("float");
				$$ = createRecord("float", "");
	 		 }
	 | CHAR {	insert_type("char");
				$$ = createRecord("char", "");
	 		}
	 | STRING {	insert_type("string");
				$$ = createRecord("string", "");
	 		  }
	 | BOOLEAN {insert_type("boolean");
				$$ = createRecord("bool", "");
	 		   }
	 ;

ids : atomo {	char *s = cat($1->code, "", "", "", "");
				freeRecord($1);
				$$ = createRecord(s, "");
				free(s);
			}
	| ids COMMA atomo {	char *s = cat($1->code, ",", $3->code, "", "");
						freeRecord($1);
						freeRecord($3);
						$$ = createRecord(s, "");
						free(s);
					  }
    | atomo COMMA p_values {char *s = cat($1->code, ",", $3->code, "", "");
							freeRecord($1);
							freeRecord($3);
							$$ = createRecord(s, "");
							free(s);
						   }
	;

atomo : ID {$$ = createRecord($1, $1);
			free($1);
		   }
      | ID dims {	char *s = cat($1, $2->code, "", "", "");
	  				freeRecord($2);
					$$ = createRecord(s, $1);
					free(s);
	  		    }
	  | AMPERSAND ID {	char *s = cat("&", $2, "", "", "");
						$$ = createRecord(s, $2);
						free(s);
	  				 }
	  | MULT ID {	char *s = cat("*", $2, "", "", "");
					$$ = createRecord(s, $2);
					free(s);
	  			}
	  | ID DOT ID {	char *s = cat($1, ".", $3, "", "");
	  				$$ = createRecord(s, $1);
					free(s);
	  			  }
	  ;

dims : OPEN_BRACK CLOSE_BRACK {	char *s = cat("[", "]", "", "", "");
								$$ = createRecord(s, "");
								free(s);
							  }
	 | OPEN_BRACK CLOSE_BRACK dims {char *s = cat("[", "]", $3->code, "", "");
									freeRecord($3);
									$$ = createRecord(s, "");
									free(s);
	 							   }
	 | OPEN_BRACK value CLOSE_BRACK {	char *s = cat("[", $2->code, "]", "", "");
										freeRecord($2);
										$$ = createRecord(s, "");
										free(s);
	 								}
     | OPEN_BRACK value CLOSE_BRACK dims {	char *s = cat("[", $2->code, "]", $4->code, "");
											freeRecord($2);
											freeRecord($4);
											$$ = createRecord(s, "");
											free(s);
						 				 }
	 | OPEN_BRACK expr CLOSE_BRACK {char *s = cat("[", $2->code, "]", "", "");
									freeRecord($2);
									$$ = createRecord(s, "");
									free(s);
	 							   }
     | OPEN_BRACK expr CLOSE_BRACK dims {	char *s = cat("[", $2->code, "]", $4->code, "");
											freeRecord($2);
											freeRecord($4);
											$$ = createRecord(s, "");
											free(s);
	 									}
	 | OPEN_BRACK ID CLOSE_BRACK {	char *s = cat("[", $2, "]", "", "");
									$$ = createRecord(s, "");
									free(s);
	 							 }
     | OPEN_BRACK ID CLOSE_BRACK dims {	char *s = cat("[", $2, "]", $4->code, "");
										freeRecord($4);
										$$ = createRecord(s, "");
										free(s);
	 								  }
	 ;

p_values : expr {	char *s = cat($1->code, "", "", "", "");
					freeRecord($1);
					$$ = createRecord(s, "");
					free(s);
				}
		 | expr COMMA p_values {char *s = cat($1->code, ",", $3->code, "", "");
								freeRecord($1);
								freeRecord($3);
								$$ = createRecord(s, "");
								free(s);
		 					   }
		 ;

expr : expr PLUS term {	char *s = cat($1->code, "+", $3->code,"", "");
						freeRecord($1);
						freeRecord($3);
						$$ = createRecord(s, "");
						free(s);
					  }
	 | expr MINUS term {char *s = cat($1->code, "-", $3->code,"", "");
						freeRecord($1);
						freeRecord($3);
						$$ = createRecord(s, "");
						free(s);	
	 				   }
	 | expr ADD_ASSIGN term {	char *s = cat($1->code, "+=", $3->code,"", "");
								freeRecord($1);
								freeRecord($3);
								$$ = createRecord(s, "");
								free(s);
	 					    }
	 | expr SUB_ASSIGN term {	char *s = cat($1->code, "-=", $3->code,"", "");
								freeRecord($1);
								freeRecord($3);
								$$ = createRecord(s, "");
								free(s);
	 						}
	 | term {	char *s = cat($1->code, "", "", "", "");
				freeRecord($1);
				$$ = createRecord(s, "");
				free(s);
	 		}
	 ;

term : term MULT factor {	char *s = cat($1->code, "*", $3->code, "", "");
							freeRecord($1);
							freeRecord($3);
							$$ = createRecord(s, "");
							free(s);
						}
     | term DIV factor {char *s = cat($1->code, "/", $3->code, "", "");
						freeRecord($1);
						freeRecord($3);
						$$ = createRecord(s, "");
						free(s);
	 				   }
	 | term MODULE factor {	char *s = cat($1->code, "%", $3->code, "", "");
							freeRecord($1);
							freeRecord($3);
							$$ = createRecord(s, "");
							free(s);
	 					  }
	 | factor { char *s = cat($1->code, "", "", "", "");
				freeRecord($1);	 
				$$ = createRecord(s, "");
				free(s);
			  }
	 ;

factor : OPEN_PAREN expr CLOSE_PAREN {	char *s = cat("(", $2->code, ")", "", "");
										freeRecord($2);
										$$ = createRecord(s, "");
										free(s);
									 }
       | atomo {	$$ = createRecord($1->code, "");
	   				freeRecord($1);
	   		   }
	   | ID INCREMENT{ char *s = cat($1,"++","","","");
						free($1);
						$$ = createRecord(s, "");
						free(s);
	   				 }
	   | ID DECREMENT{ char *s = cat($1,"--","","","");
						free($1);
						$$ = createRecord(s, "");
						free(s);
	   				 }
	   | function_call {char *s = cat($1->code, "", "", "", "");
						freeRecord($1);	 
						$$ = createRecord(s, "");
						free(s);
	   				   }
	   | value {char *s = cat($1->code, "", "", "", "");
				freeRecord($1);	 
				$$ = createRecord(s, "");
				free(s);
	   			}
	   ;
value : INT_NUMBER {char *s = cat($1,"","","","");
					$$ = createRecord(s, "");
					free(s);	
				   }
      | FLOAT_NUMBER {	char *s = cat($1,"","","","");
						$$ = createRecord(s, "");
						free(s);
	  				 }
	  | STRING_VALUE {	char *s = cat($1,"","","","");
						$$ = createRecord(s, "");
						free(s);
	  				 }
	  | NULL_VALUE {char *s = cat("NULL","","","","");
					$$ = createRecord(s, "");
					free(s);
	  			   }
	  ;

assigns : assign_def {	char *s = cat($1->code, "", "", "", "");
						freeRecord($1);	 
						$$ = createRecord(s, "");
						free(s);
					 }
        | assign_mat {	char *s = cat($1->code, "", "", "", "");
						freeRecord($1);	 
						$$ = createRecord(s, "");
						free(s);
					 }
		| assign_def assigns {	char *s = cat($1->code, $2->code, "", "", "");
								freeRecord($1);
								freeRecord($2);
								$$ = createRecord(s, "");
								free(s);
							 }
		;

assign_def : ID ASSIGN expr SEMI {	char *s = cat($1, "=", $3->code, ";", "");
									freeRecord($3);
									$$ = createRecord(s, "");
									free(s);
								 }
           ;	

assign_mat : ID dims ASSIGN expr SEMI {	char *s = cat($1, $2->code, "=", $4->code, ";");
										freeRecord($2);
										freeRecord($4);
										$$ = createRecord(s, "");
										free(s);
									  }
		   | ID dims ASSIGN ID dims SEMI {	char *s1 = cat($1, $2->code, "=", $4, $5->code);
											char *s2 = cat(s1, ";", "", "", "");
											freeRecord($2);
											freeRecord($5);
											$$ = createRecord(s2, "");
											free(s2);
											free(s1);
		   								 }
           ;

subprograms : subprogram { 	char *s = cat($1->code, "", "", "", "");
							freeRecord($1);
							$$ = createRecord(s, "");
							free(s);
						}
			| subprogram subprograms {	char *s = cat($1->code, "", $2->code, "", "");
										freeRecord($1);
										freeRecord($2);
										$$ = createRecord(s, "");
										free(s);
									 }
			;

subprogram : proc { char *s = cat($1->code, "", "", "", "");
					freeRecord($1);
					$$ = createRecord(s, "");
					free(s);
				  }
		   | function {	char *s = cat($1->code, "", "", "", "");
						freeRecord($1);
						$$ = createRecord(s, "");
						free(s);
		   			  }
		   ;

proc : VOID ID OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END {	add('P', $2);
																			char *s1 = cat("void ", $2, "(", $4->code, ")");
																			char *s2 = cat(s1, "{\n", $7->code, "\n}", "");
																			freeRecord($4);
																			freeRecord($7);
																			$$ = createRecord(s2, "");
																			free(s2);
																			free(s1);
																		 }
	 | VOID ID OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END {	add('P', $2);
																	char *s = cat("void ", $2, "(){\n", $6->code, "\n}");
	 																freeRecord($6);
																	$$ = createRecord(s, "");
																	free(s);
	 															  }
	 ;
	
function : type ID OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts RETURN value BLOCK_END {	add('F', $2);
																							char *s1 = cat($1->code, " ", $2, "(", $4->code);
																							char *s2 = cat(s1, "){\n", $7->code, "\nreturn ", $9->code);
																							char *s3 = cat(s2, "\n}", "", "", "");
																							freeRecord($1);
																							freeRecord($4);
																							freeRecord($7);
																							freeRecord($9);
																							$$ = createRecord(s3, "");
																							free(s3);
																							free(s2);
																							free(s1);
																						  }
		 | type ID OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts RETURN value BLOCK_END {add('F', $2);
																					char *s1 = cat($1->code, " ", $2, "(){\n", $6->code);
		 																			char *s2 = cat(s1, "\nreturn ", $8->code, "\n}", "");
																					freeRecord($1);
																					freeRecord($6);
																					freeRecord($8);
																					$$ = createRecord(s2, "");
																					free(s2);
																					free(s1);
		 																		   }
         ;

params : param {char *s = cat($1->code, "", "", "", "");
				freeRecord($1);
				$$ = createRecord(s, "");
				free(s);
			   }
	   | param COMMA params {	char *s = cat($1->code, ",", $3->code, "", "");
								freeRecord($1);
								freeRecord($3);
								$$ = createRecord(s, "");
								free(s);
			   				}
	   ;

param : type dims ID {	char *s = cat($1->code, " ", $2->code, $3, "");
						freeRecord($1);
						freeRecord($2);
						$$ = createRecord(s, "");
						free(s);
					 }
	  | type ID {	char *s = cat($1->code, " ", $2, "", "");
					freeRecord($1);
					$$ = createRecord(s, "");
					free(s);
			    }
	  ;

stmts : stmt {	char *s = cat($1->code, "", "", "", "");
				freeRecord($1);
				$$ = createRecord(s, "");
				free(s);
			 }
      | stmt stmts {char *s = cat($1->code, "\n", $2->code, "", "");
					freeRecord($1);
					freeRecord($2);
					$$ = createRecord(s, "");
					free(s);
				   }
	  ;

stmt : dec_var {char *s = cat($1->code, "", "", "", "");
				freeRecord($1);
				$$ = createRecord(s, "");
				free(s);
			   }
     | assigns {char *s = cat($1->code, "", "", "", "");
				freeRecord($1);
				$$ = createRecord(s, "");
				free(s);
	 		   }
	 | function_call {	char *s = cat($1->code, "", "", "", "");
						freeRecord($1);
						$$ = createRecord(s, "");
						free(s);
	 				 }
     | conditional_stmt {	char *s = cat($1->code, "", "", "", "");
							freeRecord($1);
							$$ = createRecord(s, "");
							free(s);
	 					}
	 | iteration_stmt {	char *s = cat($1->code, "", "", "", "");
						freeRecord($1);
						$$ = createRecord(s, "");
						free(s);
	 				  }
	 | scan_stmt {	char *s = cat($1->code, "", "", "", "");
					freeRecord($1);
					$$ = createRecord(s, "");
					free(s);

	 			 }
	 | print_stmt {	char *s = cat($1->code, "", "", "", "");
					freeRecord($1);
					$$ = createRecord(s, "");
					free(s);
	 			  }
	 ;

scan_stmt: SCAN OPEN_PAREN ID CLOSE_PAREN SEMI {char *s = cat("scan(", $3, ");", "", "");
												$$ = createRecord(s, "");
												free(s);
											   }
		 ;

print_stmt: PRINT OPEN_PAREN print_content CLOSE_PAREN SEMI {	char *s = cat("print(", $3->code, ");", "", "");
																freeRecord($3);
																$$ = createRecord(s, "");
																free(s);
															}
		  | PRINT OPEN_PAREN CLOSE_PAREN SEMI {	char *s = cat("print();", "", "", "", "");
		  										$$ = createRecord(s, "");
												free(s);
		  									  }
		  ;

print_content: expr { 	char *s = cat($1->code, "", "", "", "");
						freeRecord($1);
						$$ = createRecord(s, "");
						free(s);
					}
			 | print_content PLUS expr {char *s = cat($1->code, " + ", $3->code, "", "");
										freeRecord($1);
										freeRecord($3);
										$$ = createRecord(s, "");
										free(s);
			 						   }
			 | STRING_VALUE PLUS print_content {char *s = cat($1, " + ", $3->code, "", "");
												freeRecord($3);
												$$ = createRecord(s, "");
												free(s);
			 								   }
			 ;

conditional_stmt : if_stmt {char *s = cat($1->code, "", "", "", "");
							freeRecord($1);
							$$ = createRecord(s, "");
							free(s);	
						   }
				 | switch_stmt {char *s = cat($1->code, "", "", "", "");
								freeRecord($1);
								$$ = createRecord(s, "");
								free(s);
				 			   }
				 ;

if_stmt : IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END {char *s = cat("if(", $3->code, "){\n", $6->code, "\n}");
																			freeRecord($3);
																			freeRecord($6);
																			$$ = createRecord(s, "");
																			free(s);
																		   }
		| IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END ELSE BLOCK_BEGIN stmts BLOCK_END { 	char *s1 = cat("if(", $3->code, "){\n", $6->code, "\n}");
																												char *s2 = cat(s1, " else {\n", $10->code, "\n}", "");
																												freeRecord($3);
																												freeRecord($6);
																												freeRecord($10);
																												$$ = createRecord(s2, "");
																												free(s2);
																												free(s1);
																											}
		| IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END else_if_stmt ELSE BLOCK_BEGIN stmts BLOCK_END {	char *s1 = cat("if(", $3->code, "){\n", $6->code, "\n} ");
																															char *s2 = cat(s1, $8->code, " else {\n", $11->code, "\n}");
																															freeRecord($3);
																															freeRecord($6);
																															freeRecord($8);
																															freeRecord($11);
																															$$ = createRecord(s2, "");
																															free(s2);
																															free(s1);
																														 }
		| IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END else_if_stmt {	char *s1 = cat("if(", $3->code, "){\n", $6->code, "\n} ");
																							char *s2 = cat(s1, $8->code, "", "", "");
																							freeRecord($3);
																							freeRecord($6);
																							freeRecord($8);
																							$$ = createRecord(s2, "");
																							free(s2);
																							free(s1);
																						}
		;

else_if_stmt : ELSE_IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END {	char *s = cat("else if(", $3->code, "){\n", $6->code, "\n} ");
																						freeRecord($3);
																						freeRecord($6);
																						$$ = createRecord(s, "");
																						free(s);
																					 }
			 | else_if_stmt else_if_stmt {	char *s = cat($1->code, $2->code, "", "", "");
			 								freeRecord($1);
											freeRecord($2);
											$$ = createRecord(s, "");
											free(s);
			 							 }
			 ;

logic_expr : logic_expr logic_op c_term {	char *s = cat($1->code, $2->code, $3->code, "", "");
											freeRecord($1);
											freeRecord($2);
											freeRecord($3);
											$$ = createRecord(s, "");
											free(s);
										}
		   | c_term {	char *s = cat($1->code, "", "", "", "");
		   				freeRecord($1);
						$$ = createRecord(s, "");
						free(s);
		   			}
		   ;

c_term : ID {	$$ = createRecord($1, "");
				free($1);
			}
	   | ID dims {char *s= cat($1,$2->code,"","","");
					freeRecord($2);
					$$ = createRecord(s,"");
					free(s);
	   			}
	   | TRUE {		char *s= cat("true","","","","");
					$$ = createRecord(s,"");
					free(s);
			}
	   | FALSE {	char *s= cat("false","","","","");
					$$ = createRecord(s,"");
					free(s);

	   }
	   | comp {	char *s= cat($1->code,"","","","");
					freeRecord($1);
					$$ = createRecord(s,"");
					free(s);

	   }
	   ;

comp: expr comp_op expr
	;

comp_op : EQ {	char *s = cat("==", "", "", "", "");
				$$ = createRecord(s, "");
				free(s);
			 }
		| NEQ {	char *s = cat("!=", "", "", "", "");
				$$ = createRecord(s, "");
				free(s);
			  }
		| GE {	char *s = cat(">=", "", "", "", "");
				$$ = createRecord(s, "");
				free(s);
			 }
		| LE {	char *s = cat("<=", "", "", "", "");
				$$ = createRecord(s, "");
				free(s);
			 }
		| GT {	char *s = cat(">", "", "", "", "");
				$$ = createRecord(s, "");
				free(s);
			 }
		| LT {	char *s = cat("<", "", "", "", "");
				$$ = createRecord(s, "");
				free(s);
			 }
		;

logic_op : AND {char *s = cat("&&", "", "", "", "");
				$$ = createRecord(s, "");
				free(s);
			   }
		 | OR {	char *s = cat("||", "", "", "", "");
				$$ = createRecord(s, "");
				free(s);
		 	  }
		 | NOT {char *s = cat("!", "", "", "", "");
				$$ = createRecord(s, "");
				free(s);
		 	   }
		 ;

switch_stmt : SWITCH COLON OPEN_PAREN ID CLOSE_PAREN BLOCK_BEGIN switch_cases DEFAULT COLON stmts BLOCK_END {	char *s1 = cat("switch: (", $4, "){\n", $7->code, "	default:\n");
																												char *s2 = cat(s1, $10->code, "\n}", "", "");
																												freeRecord($7);
																												freeRecord($10);
																												$$ = createRecord(s2, "");
																												free(s2);
																												free(s1);
													  														}
		    ;

switch_cases : {$$ = createRecord("","");}
			 | CASE value COLON stmts BREAK switch_cases {	char *s1 = cat("case ", $2->code, ":\n", $4->code, "\n");
			 												char *s2 = cat(s1, $6->code, "", "", "");
															freeRecord($2);
															freeRecord($4);
															freeRecord($6);
															$$ = createRecord(s2, "");
															free(s2);
															free(s1);
			 											 }
			 ;

iteration_stmt : while_stmt {	char *s = cat($1->code, "", "", "", "");
		   						freeRecord($1);
								$$ = createRecord(s, "");
								free(s);
							}
			   | for_stmt {	char *s = cat($1->code, "", "", "", "");
		   					freeRecord($1);
							$$ = createRecord(s, "");
							free(s);
			   			  }
			   | dowhile_stmt {	char *s = cat($1->code, "", "", "", "");
		   						freeRecord($1);
								$$ = createRecord(s, "");
								free(s);
			   				  }
			   ;

while_stmt : WHILE OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END {	char *s = cat("while(", $3->code, "){\n", $6->code, "\n}");
																					freeRecord($3);
																					freeRecord($6);
																					$$ = createRecord(s, "");
																					free(s);
																				 }
		   ;

for_stmt : FOR OPEN_PAREN dec_var logic_expr SEMI expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END {char *s1 = cat("for(", $3->code, $4->code, ";", $6->code);
																								char *s2 = cat(s1, "){\n", $9->code, "\n}", "");
																								freeRecord($3);
																								freeRecord($4);
																								freeRecord($6);
																								freeRecord($9);
																								$$ = createRecord(s2, "");
																								free(s2);
																								free(s1);
																							   }
		 ;

dowhile_stmt : DO BLOCK_BEGIN stmts BLOCK_END WHILE OPEN_PAREN logic_expr CLOSE_PAREN SEMI {char *s = cat("do{\n", $3->code, "\n} while(", $7->code, ");");
																							freeRecord($3);
																							freeRecord($7);
																							$$ = createRecord(s, "");
																							free(s);
																						   }
             ;

function_call : ID OPEN_PAREN args CLOSE_PAREN SEMI {	char *s = cat($1, "(", $3->code, ");", "");
														freeRecord($3);
														$$ = createRecord(s, "");
														free(s);
													}
             | ID OPEN_PAREN CLOSE_PAREN SEMI {	char *s = cat($1, "();", "", "", "");
												$$ = createRecord(s, "");
												free(s);
											  }
			 ;

args : args arg {	char *s = cat($1->code, $2->code, "", "", "");
					freeRecord($1);
					freeRecord($2);
					$$ = createRecord(s, "");
					free(s);
				}
	 | arg {char *s = cat($1->code,"","","","");
			freeRecord($1);
			$$ = createRecord(s, "");
			free(s);
	 	   }
	 ;

arg : ids {	char *s = cat($1->code,"","","","");
			freeRecord($1);
			$$ = createRecord(s, "");
			free(s);
	 	  }
	;

principal : MAIN OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END {add('M', "main");
																			char *s = cat("main(", $3->code, "){\n", $6->code, "\n}");
																			freeRecord($3);
																			freeRecord($6);
																			$$ = createRecord(s, "");
																			free(s);
																		   }
		  | MAIN OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END	{	add('M', "main");
																		char *s = cat("main(){\n", $5->code, "\n}", "", "");
		  																freeRecord($5);
																		$$ = createRecord(s, "");
																		free(s);
		  															}
          ;

%% /* Fim da segunda seção */

int main (int argc, char ** argv) {
 	int codigo;

    if (argc != 3) {
       printf("Usage: $./compiler input.txt output.txt\nClosing application...\n");
       exit(0);
    }
    
    yyin = fopen(argv[1], "r");
    yyout = fopen(argv[2], "w");

    codigo = yyparse();

    fclose(yyin);
    fclose(yyout);

	printf("\nSymble Table \n");
	printf("\nSYMBOL	DATATYPE	TYPE	LINE NUMBER 	SCOPE \n");
	printf("______________________________________________________\n\n");
	int i = 0;
	for(i = 0; i < count; i++){
		printf("%s\t%s\t\t%s\t%d\t%d\t\n", 
			symbol_table[i].id_name, 
			symbol_table[i].data_type, 
			symbol_table[i].type,
			symbol_table[i].line_no,
			symbol_table[i].scope);
	}

	for(i = 0; i < count; i++){
		free(symbol_table[i].id_name);
		free(symbol_table[i].type);
	}

	return codigo;
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}

char * cat(char * s1, char * s2, char * s3, char * s4, char * s5){
  int tam;
  char * output;

  tam = strlen(s1) + strlen(s2) + strlen(s3) + strlen(s4) + strlen(s5)+ 1;
  output = (char *) malloc(sizeof(char) * tam);
  
  if (!output){
    printf("Allocation problem. Closing application...\n");
    exit(0);
  }
  
  sprintf(output, "%s%s%s%s%s", s1, s2, s3, s4, s5);
  
  return output;
}

int search(char *type) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(symbol_table[i].id_name, type) == 0) {
			return i;
			break;
		}
	}

	return 0;
}

void add(char symbol, char * id_name){
	q=search(id_name);
	if(q == 0) {
		if(symbol == 'H'){
			symbol_table[count].id_name = strdup(id_name);
			symbol_table[count].data_type = strdup(type);
			symbol_table[count].line_no = countn;
			symbol_table[count].type = strdup("Header");
			symbol_table[count].scope = count_block;
			count++;
		} else if(symbol == 'K'){
			symbol_table[count].id_name = strdup(id_name);
			symbol_table[count].data_type = strdup("N/A");
			symbol_table[count].line_no = countn;
			symbol_table[count].type = strdup("Keyword\t");
			symbol_table[count].scope = count_block;
			count++;
		} else if(symbol == 'V'){
			symbol_table[count].id_name = strdup(id_name);
			symbol_table[count].data_type = strdup(type);
			symbol_table[count].line_no = countn;
			symbol_table[count].type = strdup("Variable");
			symbol_table[count].scope = count_block;
			count++;
		} else if(symbol == 'F'){
			symbol_table[count].id_name = strdup(id_name);
			symbol_table[count].data_type = strdup(type);
			symbol_table[count].line_no = countn;
			symbol_table[count].type = strdup("Function");
			symbol_table[count].scope = count_block;
			count++;
		} else if(symbol == 'P'){
			symbol_table[count].id_name = strdup(id_name);
			symbol_table[count].data_type = strdup("N/A");
			symbol_table[count].line_no = countn;
			symbol_table[count].type = strdup("Procedure");
			symbol_table[count].scope = count_block;
			count++;
		} else if(symbol == 'M'){
			symbol_table[count].id_name = strdup(id_name);
			symbol_table[count].data_type = strdup("N/A");
			symbol_table[count].line_no = countn;
			symbol_table[count].type = strdup("Main");
			symbol_table[count].scope = count_block;
			count++;
		}
	}
}

void insert_type(char * type_text){
	strcpy(type, type_text);
}
