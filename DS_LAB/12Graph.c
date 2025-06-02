//Write a program to implement a graph traversal.
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int graph[MAX][MAX];
int visited[MAX];
int n, i, j; // number of vertices

// Queue for BFS
int queue[MAX], front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else {
        if (front == -1) front = 0;
        queue[++rear] = value;
    }
}

int dequeue() {
    if (front == -1 || front > rear)
        return -1;
    else
        return queue[front++];
}

int isQueueEmpty() {
    return (front == -1 || front > rear);
}

// BFS function
void bfs(int start) {
    for ( i = 0; i < n; i++)
        visited[i] = 0;

    enqueue(start);
    visited[start] = 1;

    printf("BFS traversal starting from vertex %d: ", start);

    while (!isQueueEmpty()) {
        int current = dequeue();
        printf("%d ", current);

        for ( i = 0; i < n; i++) {
            if (graph[current][i] && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

// DFS function
void dfs(int start) {
    visited[start] = 1;
    printf("%d ", start);

    for ( i = 0; i < n; i++) {
        if (graph[start][i] && !visited[i])
            dfs(i);
    }
}

// Menu to display options
void menu() {
    printf("\n---- Graph Traversal Menu ----\n");
    printf("1. Create Graph\n");
    printf("2. Breadth-First Search (BFS)\n");
    printf("3. Depth-First Search (DFS)\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice, edges, u, v, start;

    do {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of vertices: ");
                scanf("%d", &n);
                printf("Enter number of edges: ");
                scanf("%d", &edges);

                // Initialize graph
                for ( i = 0; i < n; i++)
                    for ( j = 0; j < n; j++)
                        graph[i][j] = 0;

                printf("Enter edges (u v):\n");
                for ( i = 0; i < edges; i++) {
                    scanf("%d %d", &u, &v);
                    graph[u][v] = 1;
                    graph[v][u] = 1; // For undirected graph
                }

                printf("Graph created successfully.\n");
                break;

            case 2:
                printf("Enter starting vertex for BFS: ");
                scanf("%d", &start);
                bfs(start);
                break;

            case 3:
                printf("Enter starting vertex for DFS: ");
                scanf("%d", &start);
                for ( i = 0; i < n; i++) visited[i] = 0;
                printf("DFS traversal starting from vertex %d: ", start);
                dfs(start);
                printf("\n");
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
