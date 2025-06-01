#include <stdio.h>
#include <stdlib.h>

int *hashTable;
int SIZE, i;

// Hash function
int hashFunction(int key) {
    return key % SIZE;
}

// Insert key into hash table using linear probing (no collisions)
void insert(int key) {
    int index = hashFunction(key);
    int originalIndex = index;

    while (hashTable[index] != -1) {
        // Since we avoid collisions by inserting only unique and limited keys,
        // this part won't loop much in our test.
        index = (index + 1) % SIZE;
        if (index == originalIndex) {
            printf("Hash table is full. Cannot insert %d\n", key);
            return;
        }
    }
    hashTable[index] = key;
    printf("Inserted %d at index %d\n", key, index);
}

// Search for a key
int search(int key) {
    int index = hashFunction(key);
    int originalIndex = index;

    while (hashTable[index] != -1) {
        if (hashTable[index] == key)
            return index;
        index = (index + 1) % SIZE;
        if (index == originalIndex)
            break;
    }
    return -1;
}

// Display the hash table
void display() {
    printf("Hash Table:\n");
    for ( i = 0; i < SIZE; i++) {
        if (hashTable[i] != -1)
            printf("Index %d: %d\n", i, hashTable[i]);
        else
            printf("Index %d: EMPTY\n", i);
    }
}

int main() {
    int n, key;

    printf("Enter size of hash table: ");
    scanf("%d", &SIZE);

    // Initialize hash table with -1 (empty)
    hashTable = (int*)malloc(SIZE * sizeof(int));
    for (i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    printf("Enter number of keys to insert (must be less than %d): ", SIZE);
    scanf("%d", &n);

    if (n >= SIZE) {
        printf("Error: To avoid collisions, number of keys must be less than table size.\n");
        return 1;
    }

    for ( i = 0; i < n; i++) {
        printf("Enter key %d: ", i + 1);
        scanf("%d", &key);
        insert(key);
    }

    display();

    // Search demo
    printf("\nEnter key to search: ");
    scanf("%d", &key);
    int foundIndex = search(key);
    if (foundIndex != -1)
        printf("Key %d found at index %d.\n", key, foundIndex);
    else
        printf("Key %d not found in the hash table.\n", key);

    free(hashTable);
    return 0;
}

