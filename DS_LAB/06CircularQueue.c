#include<stdio.h>
#include<stdbool.h>
#define MAX 5

typedef struct CircularQueue {
    int arr[MAX];
    int front;
    int rear; 
    int size;
}
    circular_Queue;

void initQueue(circular_Queue * q){
    q-> front = -1;
    q-> rear = -1;
    q-> size = 0;
}

bool is_full (circular_Queue * q) {
    return q-> size == MAX;
}
bool is_Empty (circular_Queue * q) {
    return q-> size == 0;
}
void enqueue (int data,circular_Queue * q) {
    if(is_full (q)) {
        printf("Queue Overflow.");
        return;
    }
    if(is_Empty(q)) {
        q-> front = q-> rear = 0;
    } else {
        q->  rear = (q-> rear + 1) % MAX;
    }
    q-> arr[q-> rear] = data;
    q-> size++;
    printf("Enqueue: %d", data);
}
void dequeue (circular_Queue *q) {
    if(is_Empty(q)) {
        printf("Queue Underflow\n");
        return;
    }
    if(q-> front == q->rear) {
        q-> front = q-> rear = -1;
    } else {
        q-> front = (q-> front + 1)% MAX;
    }
    q-> size--;
}
void display(circular_Queue *q) {
    if (is_Empty(q)) {
        printf("Queue is Empty");
        return;
    }
    printf("Queue : ");
    int i = q -> front;
    int count= 0;
    while(count < q -> size) {
        printf("%d", q -> arr[i]);
        i = (i+1)%MAX;
        count++;
    }

    printf("\n");
}
int main(){
    circular_Queue q;
    initQueue(&q);
    int choice;
    int value;
    do{
        printf("*** Circular Queue Menu ***\n");
        printf("1. Enqueue \n");
        printf("3. Dequeue \n");
        printf("4. Display \n");
        printf("5. Exit \n");
        printf("Enter your choice: ");

        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to queue: ");
                scanf("%d", &value);
                enqueue (value, &q);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                display(&q);
                break;
            case 4:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid choice = Please Enter 1-4");
        }
    }
    while (choice !=4);
    return 0;
}