// Write a program to Create ATM simulation
#include <stdio.h>
int main(){
    int balance = 100000;

    int pin = 2006;
    int password;
    
    for (int i = 0; i < 3; i++)
    {
        printf("Enter your pin");
        scanf("%d",&password);
        if (password != pin)
        {
            printf("\nWrong pin\n");
            if (i == 2)
            {
                printf("CARD BLOCK");
                return 0;
            }
            
        }else if (password == pin)
        {
            break;
        }
        
        
    }
    

    int user_choice = 0;
    
    do
    {
        
    printf("\n ************ MENU ****************\n");
    printf("\n 1. Check Balance \n 2. Deposit Money\n 3. Withdraw Money\n 4. Exit\n");
    
    printf("\nSELECT YOUR OPTION\n");
    scanf("%d",&user_choice);

    switch (user_choice)
    {
    case 1:
        printf("\nyour current balance = %d\n",balance);
        break;

    case 2:
        int deposited_money;
        printf("\nEnter the amount you want to deposit\n");
        scanf("%d",&deposited_money);
        if (deposited_money <= 0)
        {
            printf("Invalid amount");
        }else
        {
            balance += deposited_money;
        }
        
        
        break;
     
    case 3:
        int withdraw_money;
        printf("\nEnter the amount you want to withdraw\n");
        scanf("%d",&withdraw_money);

        if (balance < withdraw_money)
        {
            printf("\n INSUFFICIENT BALANCE");
        }else if (withdraw_money <= 0)
        {
            printf("\n Invalid amount\n");
        }
        else{
            balance -= withdraw_money;
        }
        
        break;

    case 4:
        char choice;
        printf("\n Are u sure u want to exit?\n Y/N\n");
        scanf(" %c",&choice);
        if (choice == 'y' || choice == 'Y')
        {
            return 0;
            
        }else if(choice == 'n' || choice == 'N')
        {
            user_choice = 0;
            break;
        }
        
    default:
    printf("\n     *ERROR*    \n");
        break;
    }
}while (user_choice != 4);
    
    return 0;
}