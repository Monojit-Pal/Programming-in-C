//Make a structure to store Bank Account Information of a customer of ABC Bank. Also, make an alias of it.
#include<stdio.h>

typedef struct BankAccount
{
    int accountNo;
    int ifsc;
    char branch[100];
    char name[100];
} acc;

void printDetails(acc account);

int main()
{
    acc account;
    printf("\nEnter Bank A/C no.,IFSC code,Branch,Holder name: ");
    scanf("%d",&account.accountNo);
    scanf("%d",&account.ifsc);
    scanf("%s",account.branch);
    scanf("%s",account.name);

    printDetails(account);
    return 0;
}

void printDetails(acc account)
{
    printf("Account No: %d\n",account.accountNo);
    printf("IFSC code: %d\n",account.ifsc);
    printf("Branch: %s\n",account.branch);
    printf("Holder name: %s\n",account.name);
}
