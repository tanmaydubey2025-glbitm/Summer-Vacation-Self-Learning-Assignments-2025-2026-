// Write a program to Create bank account system.

#include <stdio.h>
#include <string.h>

struct BankAccount
{
    int accountNo;
    char name[100];
    char accountType[20];
    float balance;
};

struct BankAccount account[100];

int account_count = 0;

void createAccount(){

    printf("Enter Account No:\n ");
    scanf("%d",&account[account_count].accountNo);
    getchar();
    
    printf("\nEnter the Name of Account holder:\n");
    fgets(account[account_count].name,sizeof(account[account_count].name),stdin);
    account[account_count].name[strcspn(account[account_count].name,"\n")] = '\0';

    printf("\nEnter the Account Type:\n");
    fgets(account[account_count].accountType,sizeof(account[account_count].accountType),stdin);
    account[account_count].accountType[strcspn(account[account_count].accountType,"\n")] = '\0';

    printf("Enter Account Balance:\n ");
    scanf("%f",&account[account_count].balance);
    
    account_count++;
}

void searchaccount(){
    int account_no;
    printf("\nEnter Account No:\n");
    scanf("%d",&account_no);

    for (int i = 0; i < account_count; i++)
    {
        if (account_no == account[i].accountNo)
        {
            printf("\nNAME            : %s\n",account[i].name);
            printf("AccountType     : %s\n",account[i].accountType);
            printf("balance.        : %.4f\n",account[i].balance);

        }
    }
    
}

void depositMoney(){
    int account_no;
    printf("\nEnter Account No:\n");
    scanf("%d",&account_no);

    int found = 0;
    for (int i = 0; i < account_count; i++)
    {
        if (account_no == account[i].accountNo)
        {
            float deposit;
            printf("\nNAME : %s\n",account[i].name);
            printf("\nEnter amount to be deposited:\n");
            scanf("%f",&deposit);

            account[i].balance += deposit;
            printf("\n Deposited successfully\n");
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Account not found\n");
    }
}

void withdrawMoney(){
    int account_no;
    printf("\nEnter Account No:\n");
    scanf("%d",&account_no);

    int found = 0;
    for (int i = 0; i < account_count; i++)
    {
        if (account_no == account[i].accountNo)
        {
            found = 1;
            float withdraw;
            printf("\nNAME : %s\n",account[i].name);
            printf("\nEnter amount to be deposited:\n");
            scanf("%f",&withdraw);

            if (withdraw <= account[i].balance)
            {
                account[i].balance -= withdraw;
                printf("\n Withdrawn successfully\n");
                break;
            }else
            {
                printf("\nInsufficient balance\n");
                break;
            }
    
        }
    }

    if (found == 0)
    {
        printf("Account not found\n");
    }
    
}

void deleteAccount(){
    int account_no;
    printf("\nEnter Account No:\n");
    scanf("%d",&account_no);

    int found = 0;
    for (int i = 0; i < account_count; i++)
    {
       if (account_no == account[i].accountNo){
        found = 1;

        for (int j = i; j < account_count; j++)
        {
            account[j] = account[j+1];
        }

        account_count--;
        printf("Account deleted successfully");
        break;
       }
    }

    if (found == 0)
    {
        printf("Account not found\n");
    }
    
}

int main(){
 int choice;

    do
    {
        printf("\n===== BANK ACCOUNT MANAGEMENT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Search Account\n");
        printf("5. Delete Account\n");
        printf("6. exit\n");


        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: createAccount(); break;
            case 2: depositMoney(); break;
            case 3: withdrawMoney(); break;
            case 4: searchaccount(); break;
            case 5: deleteAccount(); break;
            case 6: 
                printf("Thank You!\n"); break;
            default: 
               printf("\n     *ERROR*    \n");
               break;
        } 
    }while(choice != 6); 

return 0;
}



