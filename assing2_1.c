#include<stdio.h>

void processTransaction (float balance , int type) ;

int main (){
float accountBalance = 0.0;
int transactionType ;
do {
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
    printf("Enter transaction type: \n");
    scanf("%d",&transactionType);

 switch(transactionType) {
    case 1:
        processTransaction(accountBalance, transactionType);
        break;
    case 2:
        processTransaction(accountBalance, transactionType);
        break;
    case 3:
        printf("Current Balance: %.2f\n", accountBalance);
        break;
    case 4:
        printf("Exiting...\n");
        break;
    default:
        printf("Invalid transaction type.\n");
        break;
    }
}while (transactionType != 4);
void processTransaction(float *balance, int type) {
    static int transactionCount = 0;
    float amount;

    if (type == 1) { 
        printf("Enter deposit amount: ");
        scanf("%f", &amount);
        if (amount > 0) {
            *balance += amount;
            transactionCount++;
            printf("Successfully deposited $%.2f\n", amount);
        } else {
            printf("Invalid amount!\n");
        }
    } 
    else if (type == 2) {
        printf("Enter withdrawal amount: ");
        scanf("%f", &amount);
        if (amount > 0 && amount <= *balance) {
            *balance -= amount;
            transactionCount++;
            printf("Successfully withdrew $%.2f\n", amount);
            else if (amount > *balance) {
                printf("Incorrect balance\n");
            }
        } else {
            printf("Invalid amount or insufficient balance!\n");
        }
    }
}
    return 0;
}