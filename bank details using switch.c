#include <stdio.h>

int main()
{
    int choice;
    float balance, amount;

    do {
        printf("Bank Account Menu:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:printf("Enter amount to deposit: ");
                   scanf("%f", &amount);
                   if (amount > 0)
                {
                   balance =balance + amount;
                   printf("Deposited: %.2f\n",amount);
                }
                else
                {
                    printf("Invalid amount.\n");
                }
                break;
            case 2:printf("Enter amount to withdraw: ");
                   scanf("%f", &amount);
                   if (amount > 0 && amount <= balance)
                {
                   balance =balance - amount;
                   printf("Withdrawn: %.2f\n",amount);
                }
                else if (amount > balance)
                {
                     printf("Insufficient fund\n");
                }
                else
                {
                    printf("Invalid amount\n");
                }
                break;
            case 3:printf("Current balance: %.2f\n", balance);
                break;
            case 4:printf("Exit\n");
                break;
            default:printf("Invalid choice\n");
                break;
        }
    }
    while (choice != 4);

    return 0;
