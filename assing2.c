#include<stdio.h>
void sortAscending (int arr1[],int n){

    int temp ;
    for (int i=0 ;i< n-1 ;i++){
        for (int j=i+1 ;j<n  ;j++){
            if (arr1[i]>arr1[j]){
            temp = arr1[i];
            arr1[j]=arr1[j+1];
        arr1[j+1]=temp ;
    }
}
}
}
void sortDescending (int arr2[],int n){

    int temp ;  
    for (int i=0 ;i<n-1;i++){
        for (int j=i+1 ;j<n ;j++){
            if (arr2[i]<arr2[j]){
            temp = arr2[i];
            arr2[j]=arr2[j+1];
        arr2[j+1]=temp ;
    }
}
}
}
 int main (){
    int arr1[5] ;
    int arr2[5] ;
    int n=5 ;
    printf("Enter 5 numbers: \n");
    for (int i=0 ;i< 5 ;i++){
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];
    }
sortAscending(arr1,5);
printf("The sorted numbers in ascending order are: \n");
for (int i=0 ;i< 5 ;i++){
    
    printf("%d ",arr1[i]);
}
sortDescending(arr2,5);
printf("\nThe sorted numbers in descending order are: \n");
for (int i=0 ;i< 5 ;i++){
    
    printf("%d ",arr2[i]);
}

    return 0 ;
 }