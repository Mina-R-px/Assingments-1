#include <stdio.h>

void convertingCharToInt(char arr[], int x[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        x[i] = arr[i] - '0';
    }
}

int main() {
    char arr[5];
    int x[5];
    int i;

    printf("Enter 5 characters: ");
    for (i = 0; i < 5; i++) {
        scanf(" %c", &arr[i]);
    }

    convertingCharToInt(arr, x, 5);

    printf("Integer array is : ");
    for (i = 0; i < 5; i++) {
        printf("%d ", x[i]);
    }

    return 0;
}