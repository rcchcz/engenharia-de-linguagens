#include "symbolTable.h"

unsigned int hashf(char * str){
    unsigned int i = 0;

    for (int j = 0; str[j]; j++)
        i += str[j];

    return i % SIZE;
}

hashTable * htCreate(){
    hashTable * ht = malloc(sizeof(hashTable));

    ht->items = malloc(sizeof(htItem*) * SIZE);

    for (size_t i = 0; i < SIZE; i++){
        ht->items[i] = NULL;
    }
    return ht;
}

htItem * ht_pair(char *key, char * idName, char * dataType, char * symbolType, int lineNo) {
    // allocate the entry
    htItem * item = malloc(sizeof(htItem));
    item->key = malloc(strlen(key) + 1);
    item->value = malloc(strlen(idName) + strlen(dataType) + strlen(symbolType) + sizeof(lineNo) + 1);

    // copy the key and value in place
    strcpy(item->key, key);
    strcpy(item->value->dataType, dataType);
    strcpy(item->value->idName, idName);
    item->value->lineNo = lineNo;
    strcpy(item->value->symbolType, symbolType);

    // next starts out null but may be set later on
    item->next = NULL;

    return item;
}

void insert (hashTable *ht, char * key, char * idName, char * dataType, char * symbolType, int lineNo){
    unsigned int slot = hashf(key);

    // try to look up an entry set
    htItem * entry = ht->items[slot];

    // no entry means slot empty, insert immediately
    if (entry == NULL) {
        ht->items[slot] = ht_pair(key, idName, dataType, symbolType, lineNo);
        return;
    }

    htItem *prev;

    // walk through each entry until either the end is
    // reached or a matching key is found
    while (entry != NULL) {
        // check key
        if (strcmp(entry->key, key) == 0) {
            // match found, replace value
            free(entry->value);
            entry->value = malloc(strlen(idName) + strlen(dataType) + strlen(symbolType) + sizeof(lineNo) + 1);
            strcpy(entry->key, key);
            strcpy(entry->value->dataType, dataType);
            strcpy(entry->value->idName, idName);
            entry->value->lineNo = lineNo;
            strcpy(entry->value->symbolType, symbolType);
            return;
        }

        // walk to next
        prev = entry;
        entry = prev->next;
    }

    // end of chain reached without a match, add new
    prev->next = ht_pair(key, idName, dataType, symbolType, lineNo);
}

word * ht_get(hashTable *hashtable, char *key) {
    unsigned int slot = hashf(key);

    // try to find a valid slot
    htItem *entry = hashtable->items[slot];

    // no slot means no entry
    if (entry == NULL) {
        return NULL;
    }

    // walk through each entry in the slot, which could just be a single thing
    while (entry != NULL) {
        // return value if found
        if (strcmp(entry->key, key) == 0) {
            return entry->value;
        }

        // proceed to next key if available
        entry = entry->next;
    }

    // reaching here means there were >= 1 entries but no key match
    return NULL;
}

void ht_del(hashTable *hashtable, char *key) {
    unsigned int bucket = hashf(key);

    // try to find a valid bucket
    htItem *entry = hashtable->items[bucket];

    // no bucket means no entry
    if (entry == NULL) {
        return;
    }

    htItem *prev;
    int idx = 0;

    // walk through each entry until either the end is reached or a matching key is found
    while (entry != NULL) {
        // check key
        if (strcmp(entry->key, key) == 0) {
            // first item and no next entry
            if (entry->next == NULL && idx == 0) {
                hashtable->items[bucket] = NULL;
            }

            // first item with a next entry
            if (entry->next != NULL && idx == 0) {
                hashtable->items[bucket] = entry->next;
            }

            // last item
            if (entry->next == NULL && idx != 0) {
                prev->next = NULL;
            }

            // middle item
            if (entry->next != NULL && idx != 0) {
                prev->next = entry->next;
            }

            // free the deleted entry
            free(entry->key);
            free(entry->value);
            free(entry);

            return;
        }

        // walk to next
        prev = entry;
        entry = prev->next;

        ++idx;
    }
}

void ht_dump(hashTable *hashtable) {
    printf("\n");
    printf("Id           Datatype  SymbolType  Line\n");
    printf("----------   --------  ----------  ----\n");
    for (int i = 0; i < SIZE; ++i) {
        htItem *entry = hashtable->items[i];

        if (entry == NULL) {
            continue;
        }

        printf("slot[%4d]: ", i);

        for(;;) {
            printf("%-5s | %-5s | %-5s | %-5s", entry->value->idName, entry->value->dataType, entry->value->symbolType, entry->value->lineNo);

            if (entry->next == NULL) {
                break;
            }

            entry = entry->next;
        }

        printf("\n");
    }
}
