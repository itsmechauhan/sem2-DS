#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2, *ptr3;
    int n = 5;

    // Using malloc()
    ptr1 = (int *)malloc(n * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation failed using malloc()\n");
        exit(1);
    } else {
        printf("Memory allocated successfully using malloc()\n");
        for (int i = 0; i < n; i++) {
            ptr1[i] = i + 1;
            printf("%d ", ptr1[i]);
        }
        printf("\n");
    }

    // Using calloc()
    ptr2 = (int *)calloc(n, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation failed using calloc()\n");
        exit(1);
    } else {
        printf("Memory allocated successfully using calloc()\n");
        for (int i = 0; i < n; i++) {
        	ptr2[i]=i+5;
            printf("%d ", ptr2[i]);
        }
        printf("\n");
    }

    // Using realloc()
    ptr3 = (int *)realloc(ptr1, 2 * n * sizeof(int));
    if (ptr3 == NULL) {
        printf("Memory reallocation failed using realloc()\n");
        exit(1);
    } else {
        printf("Memory reallocated successfully using realloc()\n");
        for (int i = 0; i < 2 * n; i++) {
            printf("%d ", ptr3[i]);
        }
        printf("\n");
    }

    // Freeing memory
    free(ptr2);
    free(ptr3);

    return 0;
}
