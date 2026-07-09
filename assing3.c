#include <stdio.h>

int MaxNoSorting(int arr1[], int n)
{
    int max = arr1[0];
    for (int i = 1; i < n; i++)
    {
        if (arr1[i] > max) 
            max = arr1[i];
    }
    return max;
}

int MaxAfterSort(int arr1[], int n){


    for (int i = 0; i < n - 1; i++){
    
        for (int j = i + 1; j < n; j++){
        
            if (arr1[i] > arr1[j]){
            
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
}
}
}
    return arr1[n - 1];
}

int main()
{
    int arr1[5], b[5];

    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
        b[i] = arr1[i];
    }

    printf("Maximum without sorting = %d\n", MaxNoSorting(arr1, 5));
    printf("Maximum after sorting = %d\n", MaxAfterSort(b, 5));

    return 0;
}