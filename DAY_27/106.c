// Write a program to Create employee management system.

#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[100];
    int id;
    char department[100];
    float salary;
    int experience;
};

struct Employee employees[100];
int emplyee_count = 0;

void addemployee(){
    getchar();

    printf("Enter the name of the Employee:\n");
    fgets(employees[emplyee_count].name,sizeof(employees[emplyee_count].name),stdin);

    employees[emplyee_count].name[strcspn(employees[emplyee_count].name,"\n")] = '\0';

    printf("Enter Departement: \n");
    fgets(employees[emplyee_count].department,sizeof(employees[emplyee_count].department),stdin);

    employees[emplyee_count].department[strcspn(employees[emplyee_count].department,"\n")] = '\0';

    printf("Enter id:\n");
    scanf("%d",&employees[emplyee_count].id);

    printf("Enter salary:\n");
    scanf("%f",&employees[emplyee_count].salary);

    printf("Enter experience year:\n");
    scanf("%d",&employees[emplyee_count].experience);

    printf("\nEntery succesfull\n");

    emplyee_count++;

}

void viewemployee(){
    printf("\n ********* EMPLOYEE DETAIL************");
    
    for (int i = 0; i < emplyee_count; i++)
    {
    
        printf("\n employee number: %d\n",i+1);
        printf("name : %s\n",employees[i].name);
        printf("department : %s\n",employees[i].department);
        printf("employee-ID : %d\n",employees[i].id);
        printf("salary : %f\n",employees[i].salary);
        printf("total experience : %d\n",employees[i].experience);
        
    }
    
}

void searchemployee(){
    int user_id;
    printf("\nEnter employees id:\n");
    scanf("%d",&user_id);

    int found = 0;
    for (int i = 0; i < emplyee_count; i++)
    {
        if (user_id == employees[i].id)
        {
            found = 1;
            printf("\n name : %s\n",employees[i].name);
            printf("department : %s\n",employees[i].department);
            printf("employee-ID : %d\n",employees[i].id);
            printf("salary : %f\n",employees[i].salary);
            printf("total experience : %d\n",employees[i].experience);
            break;
        }
        
    }

    if (found == 0)
    {
        printf("\nuser not found\n");
    }
    
    
}

void update(){
    int user_id;
    printf("\nEnter employees id:\n");
    scanf("%d",user_id);
    getchar();

    int found = 0;
    for (int i = 0; i < emplyee_count; i++)
    {
        if (user_id == employees[i].id)
        {
            int found = 1;
            printf("Enter the name of the emplyee:\n");
            fgets(employees[i].name,sizeof(employees[i].name),stdin);

            employees[i].name[strcspn(employees[i].name,"\n")] = '\0';

            printf("Enter Departement: \n");
            fgets(employees[i].department,sizeof(employees[i].department),stdin);

            employees[i].department[strcspn(employees[i].department,"\n")] = '\0';
      
            printf("Enter salary:\n");
            scanf("%f",&employees[i].salary);
 
            printf("Enter experience year:\n");
            scanf("%d",&employees[i].experience);

            printf("\n UPDATE SUCCESFULLY\n");
            break;
        }

    }

    if (found == 0)
    {
        printf("\nuser not found\n");
    }
    
}

void deleteemployee(){
    int user_id;
    printf("\nEnter employees id:\n");
    scanf("%d",&user_id);

    int found = 0;
    for (int i = 0; i < emplyee_count; i++)
    {
        if (user_id == employees[i].id)
        {
            found = 1;
            for (int j = i; j < emplyee_count-1 ; j++)
            {
                employees[j] = employees[j+1];
            }

            emplyee_count--;
            printf("\n DELETED SUCCESFULLY ");
            break;

        }
    
    }

    if (found == 0)
    {
        printf("\nuser not found\n");
    }
    
}

void salary(){
    int user_id,inc_amount;
    printf("\nEnter employees id:\n");
    scanf("%d",&user_id);

    
    printf("Enter the amount to be Increased:\n");
    scanf("%d",&inc_amount);

    int found = 0;
    for (int i = 0; i < emplyee_count; i++)
    {
        if (user_id == employees[i].id)
        {
            found = 1;
            employees[i].salary += inc_amount;
            printf("\nSALARY INCREASED SUCCESFULLY\n");
            break;
        }
    
    }

    if (found == 0)
    {
         printf("\nuser not found\n");
    }
    
}

int main(){
    int choice;

    do
    {

        printf("\n******** EMPLOYEE MANAGEMENT SYSTEM ********\n");
        printf("\n1. Add Employee\n");
        printf("2. View Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Increase Salary\n");
        printf("7. Exit\n");

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
            searchemployee();
            break;
        case 4:
            update();
            break;
        case 5:
            deleteemployee();
            break;
        case 6:
            salary();
            break;
        case 7:
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

        
    } while (choice != 7);
    
}