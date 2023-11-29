#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

struct KeyValue {
    char key[50];
    int value;
};

struct HashTable {
    struct KeyValue* table[SIZE];
};

int hashFunction(char key[]) {
    int sum = 0;
    for (int i = 0; key[i] != '\0'; i++) {
        sum += key[i];
    }
    return sum % SIZE;
}

void insert(struct HashTable* ht, char key[], int value) {
    int index = hashFunction(key);
    struct KeyValue* newPair = (struct KeyValue*)malloc(sizeof(struct KeyValue));
    strcpy(newPair->key, key);
    newPair->value = value;
    ht->table[index] = newPair;
}

int search(struct HashTable* ht, char key[]) {
    int index = hashFunction(key);
    if (ht->table[index] != NULL && strcmp(ht->table[index]->key, key) == 0) {
        return ht->table[index]->value;
    }
    return -1; // Not found
}

int main() {
    struct HashTable ht;
    for (int i = 0; i < SIZE; i++) {
        ht.table[i] = NULL;
    }

    insert(&ht, "John", 25);
    insert(&ht, "Alice", 30);

    printf("Age of John: %d\n", search(&ht, "John"));
    printf("Age of Alice: %d\n", search(&ht, "Alice"));

    return 0;
}
