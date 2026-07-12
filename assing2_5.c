#include <stdio.h>

int power(int base, int exponent);
int sumDigits(int n);

int main() {
    int base;
    int exp;
    int num;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    printf("Result of %d^%d = %d\n", base, exp, power(base, exp));

    printf("Enter an integer to sum its digits: ");
    scanf("%d", &num);
    printf("Sum of digits of %d = %d\n", num, sumDigits(num));

    return 0;
}

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumDigits(n / 10);
}
