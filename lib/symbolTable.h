#include <string.h>
#include <stdlib.h>
#include <limits.h>

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
        htItem * next;                                                                                                                                          
} htItem;

typedef struct hashTable{
        htItem ** items;
} hashTable;

hashTable table;


unsigned int hashf(char * str);
hashTable * htCreate();
htItem * itemPair(char *key, char * idName, char * dataType, char * symbolType, int lineNo);
void insert (hashTable *ht, char * key, char * idName, char * dataType, char * symbolType, int lineNo);
word * ht_get(hashTable *hashtable, char *key);
void ht_del(hashTable *hashtable, char *key);
void ht_dump(hashTable *hashtable);