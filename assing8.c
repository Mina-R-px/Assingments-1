#include <stdio.h>

void reverseArray(int arr[], int n) {
    int i;
    int temp;
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main() {
    int arr[5];
    int i;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, 5);

    printf("Reversed array is : ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}