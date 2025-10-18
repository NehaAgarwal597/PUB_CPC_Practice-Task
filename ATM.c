#include <stdio.h>

int main() {
    int pin;
    int option;
    double balance = 10000.00;
    double amount;

    printf("Enter Pin :  ");
    scanf("%d", &pin);
    printf("1. Check Your Balance\n");
    printf("2. Deposit Your Money\n");
    printf("3. Withdraw Your Money\n");

    printf("Enter Option: ");
    scanf("%d",  &option);

    if (option == 1) {
        printf("Your current balance is: %.f\n",  balance);
    }
    else if (option == 2) {
        printf("Enter amount to deposit: ");
        scanf("%f ", &amount);
        if (amount > 0)
        {  balance =balance + amount;
            printf("New balance after Deposit: %.f\n", balance);
        }
    }
    else if (option == 3) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        if (amount > 0 && amount <= balance)
        {  balance =balance- amount;
           printf("New balance after Withdraw: %.f\n", balance);
        }
        else if (amount > balance) {
            printf("Insufficient balance!\n");
        }

    }

    else {
        printf("Invalid option! \n");
    }

  
}
