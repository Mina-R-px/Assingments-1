#include <stdio.h>

int sumMainDiagonal(int matrix[3][3]);
void searchElement(int *ptr, int target);

int main() {
    int matrix[3][3];
    int target, diagonalSum;

    printf("Enter elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Your 3x3 Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    diagonalSum = sumMainDiagonal(matrix);
    printf("Sum of main diagonal elements: %d\n", diagonalSum);

    printf("Enter a number to search for: ");
    scanf("%d", &target);
    
    searchElement((int *)matrix, target);



int sumMainDiagonal(int matrix[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

void searchElement(int *ptr, int target) {
    int found = 0;
    int totalElements = 3 * 3; 

    for (int i = 0; i < totalElements; i++) {
        if (*(ptr + i) == target) {
            int row = i / 3;
            int col = i % 3;
            printf("Element %d found at location: Row %d, Column %d\n", target, row, col);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("Element %d not found in the matrix.\n", target);
    }
}
return 0;
}   
