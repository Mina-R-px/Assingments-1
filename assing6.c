#include <stdio.h>

char findingMaxChar(char arr[], int n) {
    char max = arr[0];
    int i;

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    char arr[5];
    int i;

    printf("Enter 5 characters: ");
    for (i = 0; i < 5; i++) {
        scanf(" %c", &arr[i]);
    }

    printf("Maximum character = %c\n", findingMaxChar(arr , 5));

    return 0;
}