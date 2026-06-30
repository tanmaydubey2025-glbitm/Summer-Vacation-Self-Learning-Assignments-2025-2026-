// Write a program to Create student record management system
#include <stdio.h>
#include <string.h>




struct student
{
    char name[100];
    char branch[100];
    int roll;
    int age;
    int marks;
};

struct student students[100]; // create students array


int student_count = 0;
void addstudent(){
    getchar();

    printf("\n Enter student Name: \n");
    fgets(students[student_count].name,sizeof(students[student_count].name),stdin);

    students[student_count].name[strcspn(students[student_count].name,"\n")] = '\0';

    printf("Enter branch: \n");
    fgets(students[student_count].branch,sizeof(students[student_count].branch),stdin);

    students[student_count].branch[strcspn(students[student_count].branch,"\n")] = '\0';

    printf("Enter roll number:\n");
    scanf(" %d",&students[student_count].roll);
    

    printf("\n Enter age: \n");
    scanf(" %d",&students[student_count].age);
   

    printf("Enter marks\n");
    scanf(" %d",&students[student_count].marks);
    

    student_count++;

    printf("\n Student added successfully \n");
}

void studentdetails(){
    if (student_count == 0)
    {
        printf("\n No student record \n");
    }
    
    for (int i = 0; i < student_count; i++)
    {
        printf("\nstudent %d\n",(1+i));
        printf("Name : %s\n",students[i].name);
        printf("Branch : %s\n",students[i].branch);
        printf("Roll no : %d\n",students[i].roll);
        printf("age : %d\n",students[i].age);
        printf("Marks : %d\n",students[i].marks);
        printf("\n********************************\n");
        
    }
    
}

void searchStudent(){
    int roll_num;
    printf("Enter student roll number");
    scanf("%d",&roll_num);
    
    int found = 0;
    for (int i = 0; i < student_count; i++)
    {
        if (roll_num == students[i].roll)
        {
        printf("\nstudent %d\n",(1+i));
        printf("Name : %s\n",students[i].name);
        printf("Branch : %s\n",students[i].branch);
        printf("Roll no : %d\n",students[i].roll);
        printf("age : %d\n",students[i].age);
        printf("Marks : %d\n",students[i].marks);
        found = 1;
        break;
        }        
    }

    if (found == 0)
    {
       printf("\nno data available\n");
    }
    
    
}

void updateStudent(){
    int roll_num;
    printf("Enter student roll number");
    scanf("%d",&roll_num);
    getchar();

    int found = 0;
    for (int i = 0; i < student_count; i++)
    {
        if (roll_num == students[i].roll)
        {
            printf("\n Enter student Name: \n");
            fgets(students[i].name,sizeof(students[i].name),stdin);

            students[i].name[strcspn(students[i].name,"\n")] = '\0';

            printf("Enter branch: \n");
            fgets(students[i].branch,sizeof(students[i].branch),stdin);

            students[i].branch[strcspn(students[i].branch,"\n")] = '\0';


        printf("\n Enter age: \n");
        scanf("%d",&students[i].age);

        printf("Enter marks\n");
        scanf("%d",&students[i].marks);

        found = 1;
        break;
        }
    }

    if (found == 0)
    {
        printf("\n No data available");
    }
    
}

void deleteStudent(){
     int roll_num;
    printf("Enter student roll number");
    scanf("%d",&roll_num);

    int found = 0;
    for (int i = 0; i < student_count; i++)
    {
        if (roll_num == students[i].roll)
        {
            found = 1;
            for (int j = i; j < (student_count- 1); j++)
            {
                students[j] = students[j+1];
            }
            
            student_count--;
            printf("\n DELETED SUCCESFULLY \n");

            break;

        }
    }   
    
    if (found == 0)
    {
        printf("Data not found");
    }
    
}


int main(){
    int choice;

    do
    {
        printf("\n******* STUDENT RECORD MANAGEMENT ********\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

    
    printf("Enter your choice:\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        addstudent();
        break;

    case 2:
        studentdetails();
        break;

    case 3:
        searchStudent();
        break;
    
    case 4:
        updateStudent();
        break;

    case 5:
        deleteStudent();
        break;
    
    case 6:
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

    } while (choice != 6);

    return 0;
}