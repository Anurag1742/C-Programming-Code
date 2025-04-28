#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100
int i,j;
// Queue structure
struct Queue {
    int items[MAX_SIZE];
    int front;
    int rear;
};

// Function prototypes
void createQueue(struct Queue *q);
bool isEmpty(struct Queue *q);
bool isFull(struct Queue *q);
void enqueue(struct Queue *q, int value);
void dequeue(struct Queue *q);
void display(struct Queue *q);

int main() {
    struct Queue q;
    int choice, value;
    createQueue(&q);

    while (1) {
        printf("\n====== Queue Menu ======\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Check Underflow\n");
        printf("4. Check Overflow\n");
        printf("5. Display Queue\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                if (isEmpty(&q)) {
                    printf("Queue Underflow: Queue is empty.\n");
                } else {
                    printf("Queue is not empty.\n");
                }
                break;
            case 4:
                if (isFull(&q)) {
                    printf("Queue Overflow: Queue is full.\n");
                } else {
                    printf("Queue is not full.\n");
                }
                break;
            case 5:
                display(&q);
                break;
            case 6:
                printf("Exiting program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Create queue
void createQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Check if queue is empty
bool isEmpty(struct Queue *q) {
    return (q->front == -1 || q->front > q->rear);
}

// Check if queue is full
bool isFull(struct Queue *q) {
    return (q->rear == MAX_SIZE - 1);
}

// Enqueue operation
void enqueue(struct Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue Overflow: Cannot enqueue %d\n", value);
        return;
    }

    if (isEmpty(q)) {
        q->front = q->rear = 0;
    } else {
        q->rear++;
    }

    q->items[q->rear] = value;
    printf("Enqueued: %d\n", value);
}

// Dequeue operation
void dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow: Cannot dequeue\n");
        return;
    }

    printf("Dequeued: %d\n", q->items[q->front]);

    q->front++;
    if (q->front > q->rear) {
        // Reset queue if empty after dequeue
        createQueue(q);
    }
}

// Display queue contents
void display(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue contents: ");
    for (i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

