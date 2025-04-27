#include <stdio.h>   // for printf
#include <ctype.h>   // for isdigit
#include <stdlib.h>

#define MAX 100

// Stack implementation using array
int stack[MAX];
int top = -1;

// Function to push value to stack
void push(int value) {
    if (top >= MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = value;
}

// Function to pop value from stack
int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        exit(1); // terminate due to invalid expression
    }
    return stack[top--];
}

// Function to evaluate postfix expression
int evaluatePostfix(char* exp) {
    int i = 0;

    while (exp[i] != '\0') {
        // If the character is a digit, convert and push
        if (isdigit(exp[i])) {
            push(exp[i] - '0'); // convert char to int
        } else {
            // It's an operator, pop two operands
            int val2 = pop();
            int val1 = pop();

            switch (exp[i]) {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': push(val1 / val2); break;
                default:
                    printf("Invalid operator %c\n", exp[i]);
                    exit(1);
            }
        }
        i++;
    }

    // Final result
    return pop();
}

// Main function
int main() {
    char exp[] = "53+2*"; // Example: (5 + 3) * 2 = 16
    printf("Postfix Expression Evaluation: %d\n", evaluatePostfix(exp));
    return 0;
}

