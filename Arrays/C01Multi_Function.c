#include <stdio.h>

#define MAX_SIZE 100

// Function prototypes
void display(int arr[], int n);
float average(int arr[], int n);
void insert(int arr[], int *n, int element, int position);
void delete(int arr[], int *n, int position);
int linearSearch(int arr[], int n, int key);
int binarySearch(int arr[], int low, int high, int key);
void reverse(int arr[], int n);
void merge(int arr1[], int n1, int arr2[], int n2, int merged[]);

int main() {
    int arr[MAX_SIZE], arr2[MAX_SIZE], merged[MAX_SIZE * 2];
    int n, choice, element, position, key;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\nArray Operations:\n");
        printf("1. Average\n2. Insertion\n3. Deletion\n4. Searching (Linear & Binary)\n5. Display\n6. Reverse\n7. Merging\n8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Average: %.2f\n", average(arr, n));
                break;
            case 2:
                printf("Enter element and position to insert: ");
                scanf("%d %d", &element, &position);
                insert(arr, &n, element, position);
                break;
            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                delete(arr, &n, position);
                break;
            case 4:
                printf("Enter element to search: ");
                scanf("%d", &key);
                printf("Linear Search Result: %d\n", linearSearch(arr, n, key));
                printf("Binary Search Result: %d\n", binarySearch(arr, 0, n - 1, key));
                break;
            case 5:
                display(arr, n);
                break;
            case 6:
                reverse(arr, n);
                break;
            case 7:
                printf("Enter number of elements in second array: ");
                int n2;
                scanf("%d", &n2);
                printf("Enter elements of second array: ");
                for (int i = 0; i < n2; i++) {
                    scanf("%d", &arr2[i]);
                }
                merge(arr, n, arr2, n2, merged);
                display(merged, n + n2);
                break;
            case 8:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}

void display(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

float average(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

void insert(int arr[], int *n, int element, int position) {
    if (*n >= MAX_SIZE || position < 0 || position > *n) {
        printf("Insertion not possible\n");
        return;
    }
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*n)++;
    display(arr, *n);
}

void delete(int arr[], int *n, int position) {
    if (*n <= 0 || position < 0 || position >= *n) {
        printf("Deletion not possible\n");
        return;
    }
    for (int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    display(arr, *n);
}

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

void reverse(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    display(arr, n);
}

void merge(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) merged[k++] = arr1[i++];
        else merged[k++] = arr2[j++];
    }
    while (i < n1) merged[k++] = arr1[i++];
    while (j < n2) merged[k++] = arr2[j++];
    return ;
}
