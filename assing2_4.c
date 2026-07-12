#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int arr[5];

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray before sorting: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < 4; i++) {         
        for (int j = 0; j < 4 - i; j++) { 
         if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
         }
        }
    }

    printf("\nArray after sorting: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
