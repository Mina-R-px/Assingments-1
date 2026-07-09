#include <stdio.h>

int countNumber(int a[], int n, int Repeat){

    int count = 0;
    for (int i = 0; i < n; i++){
    
        if (a[i] == Repeat){
        
            count++;
}
}
    return count;
}

int countChar(char a[], int n, char Repeat)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == Repeat)
        {
            count++;
        }
    }
    return count;
}

int main(){

    int numArr[5] = {2, 5, 2, 8, 2};
    int RepeatNum = 2;
    printf("The number %d will appear %d times.\n", RepeatNum, countNumber(numArr, 5, RepeatNum));
    
    char charArr[6] = {'m', 'b', 'm', 'c', 'm', 'd'};
    char RepeatChar = 'm';
    printf("The character '%c' will appear %d times.\n", RepeatChar, countChar(charArr, 6, RepeatChar  ));

    return 0;
}