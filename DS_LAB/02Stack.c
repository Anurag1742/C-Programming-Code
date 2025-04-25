/*Write a program to implement STACK and its operations using array: 
a) Create b) Underflow c) Overflow d) PUSH e) POP */

#include <stdio.h>
#include<stdbool.h>

#define MAX_SIZE 100

int i,j;
//Stack structure
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Function to initialize thee stack
void createStack(struct Stack *stack)  {
    stack->top = -1; //Initialize top as -1 (indicationg an empty stack)
}

// Function to check if thhe stack is full
bool isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to check if thhe stack is Empty
bool isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow! Cannot push element %d.\n", value);
    } else {
        stack->items[++stack->top] = value;
        printf("Pushed %d onto thee stack.\n", value);
    }
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
        return -1; //Indicate error
    } else {
        return stack->items[stack->top--];
    }
}

// Function to display the stack
void display(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: \n");
        for ( i = stack->top; i >= 0; i--) {
            printf("%d  ", stack->items[i]);
        }
        printf("\n");
    }
}

// Main function with menu-driven approach
int main() {
    struct Stack stack;
    createStack(&stack);
    int choice, value;

    while (1) {
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Check Underflow\n");
        printf("4. Check Overflow\n");
        printf("5. Display Stack\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                value = pop(&stack);
                if (value != -1) {
                    printf("Popped element: %d\n", value);
                }
                break;
            case 3:
                if (isEmpty(&stack)) {
                    printf("Stack Underflow: The stack is empty.\n");
                } else {
                    printf("Stack is not empty.\n");
                }
                break;
            case 4:
                if (isFull(&stack)) {
                    printf("Stack Overflow: The stack is full.\n");
                } else {
                    printf("Stack is not full.\n");
                }
                break;
            case 5:
                display(&stack);
                break;
            case 6:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a number between 1 and 6.\n");
        }
    }
    return 0;
}

