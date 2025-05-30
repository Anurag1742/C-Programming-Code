#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10  // Size of the hash table

int i;
// Node structure for chaining
typedef struct Node {
    int key;
    struct Node* next;
} Node;

// Hash table (array of pointers to Node)
Node* hashTable[SIZE];

// Hash function
int hashFunction(int key) {
    return key % SIZE;
}

// Insert a key into the hash table
void insert(int key) {
    int index = hashFunction(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->next = hashTable[index];
    hashTable[index] = newNode;
    printf("Inserted %d at index %d\n", key, index);
}

// Search for a key in the hash table
int search(int key) {
    int index = hashFunction(key);
    Node* temp = hashTable[index];
    while (temp != NULL) {
        if (temp->key == key)
            return 1;  // Found
        temp = temp->next;
    }
    return 0;  // Not found
}

// Display the hash table
void display() {
    for ( i = 0; i < SIZE; i++) {
        printf("Index %d: ", i);
        Node* temp = hashTable[i];
        while (temp != NULL) {
            printf("%d -> ", temp->key);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

// Main function
int main() {
    // Initialize hash table
    for (i = 0; i < SIZE; i++)
        hashTable[i] = NULL;

    // Sample insertions
    insert(5);
    insert(15);
    insert(25);
    insert(9);
    insert(19);

    display();

    // Sample searches
    int key;
    printf("\nEnter key to search: ");
    scanf("%d", &key);
    if (search(key))
        printf("Key %d found in the hash table.\n", key);
    else
        printf("Key %d not found in the hash table.\n", key);

    return 0;
}

