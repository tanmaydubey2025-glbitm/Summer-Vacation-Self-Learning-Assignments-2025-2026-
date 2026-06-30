// Write a program to Create salary management system
#include <stdio.h>
#include <string.h>
struct salary
{
    int id;
    char name[100];
    float basicsalary;
    float hra;
    float da;
    float tax;
    float grossSalary;
    float netSalary;

};


struct salary employees[100];

int emplyee_count = 0;
void addemployee(){
    getchar();

    printf("Enter the name of the Employee:\n");
    fgets(employees[emplyee_count].name,sizeof(employees[emplyee_count].name),stdin);

    employees[emplyee_count].name[strcspn(employees[emplyee_count].name,"\n")] = '\0';

    printf("Enter id:\n");
    scanf("%d",&employees[emplyee_count].id);

    printf("Enter basicsalary:\n");
    scanf("%f",&employees[emplyee_count].basicsalary);

    printf("\nEntery succesfull\n");

    emplyee_count++;

}

void viewemployee(){
    printf("\n -----------------------------------------------\n");
    printf("\n                 SALARY SLIP                      ");
    printf("\n -----------------------------------------------\n");

    for (int i = 0; i < emplyee_count; i++)
    {
        employees[i].hra = employees[i].basicsalary * 0.20; // 20%
        employees[i].da = employees[i].basicsalary * 0.10; // 10%
        employees[i].tax = employees[i].basicsalary * 0.5; // 5%

        employees[i].grossSalary = employees[i].basicsalary + employees[i].hra + employees[i].da;
        employees[i].netSalary = employees[i].grossSalary - employees[i].tax;
    
        printf("\nEmployee ID  : %d\n",employees[i].id);
        printf("Name          : %s\n",employees[i].name);
        printf("\nBasic Salary  : %f\n",employees[i].basicsalary);
        printf("HRA           : %f\n",employees[i].hra);
        printf("DA            : %f\n",employees[i].da);

        printf("\nGross Salary  : %f\n",employees[i].grossSalary);
        printf("\nTax           : %f\n",employees[i].tax);
        printf("\nNet Salary    : %f\n",employees[i].netSalary);
        printf("\n------------------------------------------------\n");
        
    }
    
}

void searchemp(){
    int emp_id;
    printf("\nEnter Employee ID\n");
    scanf("%d",&emp_id);

    int found = 0;
    for (int i = 0; i < emplyee_count; i++)
    {
        if (emp_id == employees[i].id)
        {

            printf("\n------------------------Employee Salary detail--------------------------------\n");
            found = 1;
            employees[i].hra = employees[i].basicsalary * 0.20; // 20%
            employees[i].da = employees[i].basicsalary * 0.10; // 10%
            employees[i].tax = employees[i].basicsalary * 0.5; // 5%

            employees[i].grossSalary = employees[i].basicsalary + employees[i].hra + employees[i].da;
            employees[i].netSalary = employees[i].grossSalary - employees[i].tax;
    
            printf("\nEmployee ID   : %d\n",employees[i].id);
            printf("Name          : %s\n",employees[i].name);
            printf("\nBasic Salary  : %f\n",employees[i].basicsalary);
            printf("HRA           : %f\n",employees[i].hra);
            printf("DA            : %f\n",employees[i].da);

            printf("\nGross Salary  : %f\n",employees[i].grossSalary);
            printf("\nTax           : %f\n",employees[i].tax);
            printf("\nNet Salary    : %f\n",employees[i].netSalary);
            
            break;

        }
        
    }

    if (found == 0)
    {
       printf("\n no data found\n");
    }

}

int main(){
    int choice;
    
    do
    {

        printf("\n******** Salary Management System ********\n");
        printf("\n1. Add Employee\n");
        printf("2. Display Salary Slip\n");
        printf("3. Search Employee Salary\n");
        printf("4. Exit\n");

        printf("\nEnter your choice:\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            addemployee();
            break;
        case 2:
            viewemployee();
            break;
        case 3:
            searchemp();
            break;
        case 4:
        char char_choice;
        printf("\n Are u sure u want to exit?\n Y/N\n");
        scanf(" %c",&char_choice);
        if (char_choice == 'y' || char_choice == 'Y')
        {
            return 0;
            
        }else if(char_choice == 'n' || char_choice == 'N')
        {
            choice = 0;
            break;
        }
        
        default:
        printf("\n     *ERROR*    \n");
            break;
        }

    }while (choice != 4);
    
    

    return 0;
}
