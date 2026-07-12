#include <stdio.h>
int main (){

void modifyString(char *str, int *vowelCount);

int main() {
    char word[100];
    int vowels = 0;

    printf("Enter a single word: ");
    scanf("%99s", word);

    modifyString(word, &vowels);

    printf("Modified string (Uppercase): %s\n", word);
    printf("Total number of vowels: %d\n", vowels);

    return 0;
}

void modifyString(char *str, int *vowelCount) {
    char *ptr = str ; 

    while (*ptr != '\0') {
        char ch = *ptr;

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            (*vowelCount)++;
        }

        if (ch >= 'a' && ch <= 'z') {
            *ptr = ch - 32;
        }

        ptr++;
    }
}

return 0 ;
}