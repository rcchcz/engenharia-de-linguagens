#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

#define SIZE 40

typedef struct word {
        char * idName;
        char * dataType;
        char * symbolType;
        int lineNo;
} word;

typedef struct htItem{
        char * key;
        word * value;     
        struct htItem * next;                                                                                                                                          
} htItem;

typedef struct hashTable{
        struct htItem ** items;
} hashTable;



unsigned int hashf(char * str);
hashTable * htCreate();
htItem * ht_pair(char *key, char * idName, char * dataType, char * symbolType, int lineNo);
word * ht_get(hashTable *hashtable, char *key);
void insert (hashTable *ht, char * key, char * idName, char * dataType, char * symbolType, int lineNo);
void ht_del(hashTable *hashtable, char *key);
void ht_dump(hashTable *hashtable);
