#include <stdio.h>

int n;

void create(int array[50]);
void display(int array[50]);
void insert(int array[50]);
void del(int array[50]);
void search(int array[50]);

int main() {
    int arr[n];
    create(arr);
    display(arr);
    insert(arr);
    display(arr);
    del(arr);
    display(arr);
    search(arr);
    return 0;
}

void create(int array[50]) {
    printf("Enter the size of N: ");
    scanf("%d", &n);
    // Taking input in an array
    printf("\nEnter the elements in the array : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
}

void display(int array[50]) {
    printf("\nThe Final Array is : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

void insert(int array[50]) {
    // Position at which element is to be inserted
    int pos;
    printf("\nEnter the pos where you want to insert an element: ");
    scanf("%d", &pos);
    // Element to be inserted
    int x;
    printf("\nEnter the element to insert at %d position : ", pos);
    scanf("%d", &x);
    // Increase the size by 1
    n++;

    // Shift elements forward
    for (int i = n - 1; i >= pos; i--) {
        array[i] = array[i - 1];
    }

    // Insert x at pos
    array[pos - 1] = x;
}

void del(int array[50]) {
    // Position at which element is to be deleted
    int pos;
    printf("\nEnter the pos of which you want to delete an element: ");
    scanf("%d", &pos);
    // Shift elements backward
    for (int i = pos - 1; i <= n - 1; i++) {
        array[i] = array[i + 1];
    }
    // Decreasing the size by 1
    n--;
}

void search(int array[50]) {
    int target, i, f = 0;
    printf("\nEnter the target element you want to search in an array: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        if (array[i] == target) {
            f = 1;
            break;
        }
    }
    if (f == 1)
        printf("%d is found at index: %d in the Array.\n", target, i);
    else
        printf("%d is not found in Array.\n", target);
}
