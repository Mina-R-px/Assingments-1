#include<stdio.h>
void Chararray (char s[])
{
    printf("Enter a string: \n");
}

int main (){
    char s[10];

    Chararray(s);
scanf("%s",&s);
printf("The string is: %s",s);

    return 0;
}