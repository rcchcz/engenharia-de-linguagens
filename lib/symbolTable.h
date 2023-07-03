#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct usedWords {
        char * idName;
        char * dataType;
        char * symbolType;
        int lineNo;
} usedWords[100];

void allocate();
void free();
void *lookup();
void insertType();
void setAttribute();
void getAttribute();