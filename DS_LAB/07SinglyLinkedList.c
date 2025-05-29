#include <stdio.h>
#include <stdlib.h>
int i;
// Define the node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to insert at the beginning
void insertAtBeginning(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    printf("Inserted %d at the beginning\n", value);
}

// Function to insert at the end
void insertAtEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }

    printf("Inserted %d at the end\n", value);
}

// Function to insert at a defined position
void insertAtPosition(int value, int position) {
    if (position < 1) {
        printf("Invalid position!\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        struct Node* temp = head;
        for (i = 1; temp != NULL && i < position - 1; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            printf("Position out of range!\n");
            free(newNode);
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    printf("Inserted %d at position %d\n", value, position);
}

// Function to delete from a defined position
void deleteFromPosition(int position) {
    if (head == NULL || position < 1) {
        printf("Invalid operation or empty list!\n");
        return;
    }

    struct Node* temp = head;

    if (position == 1) {
        head = head->next;
        printf("Deleted %d from position 1\n", temp->data);
        free(temp);
        return;
    }

    struct Node* prev = NULL;
    for ( i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }

    prev->next = temp->next;
    printf("Deleted %d from position %d\n", temp->data, position);
    free(temp);
}

// Function to display the list
void display() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function with menu
int main() {
    int choice, value, position;

    do {
        printf("\n--- Linked List Menu ---\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Delete from position\n");
        printf("5. Display list\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert at beginning: ");
            scanf("%d", &value);
            insertAtBeginning(value);
            break;

        case 2:
            printf("Enter value to insert at end: ");
            scanf("%d", &value);
            insertAtEnd(value);
            break;

        case 3:
            printf("Enter value and position: ");
            scanf("%d %d", &value, &position);
            insertAtPosition(value, position);
            break;

        case 4:
            printf("Enter position to delete: ");
            scanf("%d", &position);
            deleteFromPosition(position);
            break;

        case 5:
            display();
            break;

        case 6:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 6);

    return 0;
}

