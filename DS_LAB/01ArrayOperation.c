/*Write a C program to implement the following operation on Array: 
(a) Average (b) Insertion (c) Deletion 
(d) Searching (LS&BS) (e) Display (f) Reverse (g) Merging*/


#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the array
int i,j;

// Function prototypes
void display(int arr[], int size);
float average(int arr[], int size);
void insert(int arr[], int *size, int element, int position);
void deleteElement(int arr[], int *size, int position);
int linearSearch(int arr[], int size, int key);
int binarySearch(int arr[], int size, int key);
void reverse(int arr[], int size);
void merge(int arr1[], int size1, int arr2[], int size2, int merged[]);

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, position, key;
    int arr2[MAX_SIZE];
    int size2;

    do {
        // Menu for operations
        printf("\nArray Operations Menu:\n");
        printf("1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Searching (Linear Search)\n");
        printf("4. Searching (Binary Search)\n");
        printf("5. Display\n");
        printf("6. Average\n");
        printf("7. Reverse\n");
        printf("8. Merge\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position to insert (0 - based index): ");
                scanf("%d", &position);
                insert(arr, &size, element, position);
                break;
            case 2:
                printf("Enter position to delete (0 - based index): ");
                scanf("%d", &position);
                deleteElement(arr, &size, position);
                break;
            case 3:
                printf("Enter element to search: ");
                scanf("%d", &key);
                position = linearSearch(arr, size, key);
                if (position != -1)
                    printf("Element found at position %d.\n", position);
                else
                    printf("Element not found.\n");
                break;
            case 4:
                printf("Enter element to search: ");
                scanf("%d", &key);
                position = binarySearch(arr, size, key);
                if (position != -1)
                    printf("Element found at position %d.\n", position);
                else
                    printf("Element not found.\n");
                break;
            case 5:
                printf("Array elements: ");
                display(arr, size);
                break;
            case 6:
                printf("Average of array elements: %.2f\n", average(arr, size));
                break;
            case 7:
                reverse(arr, size);
                printf("Array after reversing: ");
                display(arr, size);
                break;
            case 8:
                printf("Enter size of second array: ");
                scanf("%d", &size2);
                printf("Enter elements of second array:\n");
                for ( i = 0; i < size2; ++i) {
                    scanf("%d", &arr2[i]);
                }
                merge(arr, size, arr2, size2, arr);
                size += size2;
                printf("Arrays merged successfully.\n");
                break;
            case 9:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 9);

    return 0;
}

// Function to display elements of array
void display(int arr[], int size) {
    for (i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to calculate average of array elements
float average(int arr[], int size) {
    if (size == 0)
        return 0.0;
    
    int sum = 0;
    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return (float)sum / size;
}

// Function to insert element at given position in array
void insert(int arr[], int *size, int element, int position) {
    if (position < 0 || position > *size) {
        printf("Invalid position.\n");
        return;
    }

    // Shift elements to the right to make space for new element
     
    arr[position] = element;
    (*size)++;
    printf("Element inserted successfully.\n");
}

// Function to delete element at given position in array
void deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position.\n");
        return;
    }

    // Shift elements to the left to fill the gap
    for ( i = position; i < *size - 1; ++i) {
        arr[i] = arr[i + 1];
    
	}
   (*size)--; 
    printf("Element deleted successfully.\n");
}

// Function to perform linear search on array
int linearSearch(int arr[], int size, int key) {
    for ( i = 0; i < size; ++i) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

// Function to perform binary search on sorted array
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Function to reverse elements of array
void reverse(int arr[], int size) {
    int temp;
    for ( i = 0; i < size / 2; ++i) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

// Function to merge two arrays into one
void merge(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        merged[k++] = arr1[i++];
    }
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}
  
