// Write a program to Create marksheet generation system.
#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float marks[5];
    int total;
    float percentage;
    char grade;
};

char subjects[10][100] = {
        "Mathematics",
        "Physics",
        "Electrical",
        "PPS",
        "EVS",
};


struct student student_info[100];

int student_count = 0;
void addstudent(){
    int student_num;
    printf("\nEnter number of students:\n");
    scanf("%d",&student_num);

    student_num += student_count;

    
    for (int i = student_count; i < student_num; i++)
    {
    getchar();
    printf("\nEnter the name of the Student:\n");
    fgets(student_info[i].name,sizeof(student_info[i].name),stdin);

    student_info[i].name[strcspn(student_info[i].name,"\n")] = '\0';

    printf("Enter roll no: \n");
    scanf("%d",&student_info[i].roll);

    student_info[i].total = 0;

    printf("\nENTER MARKS OF 5 SUBJECTS:\n");
    for (int j = 0; j < 5; j++)
    {
        printf("Enter Marks of %s: \n",subjects[j]);
        scanf("%f",&student_info[i].marks[j]);

        student_info[i].total += student_info[i].marks[j];
    }

    student_info[i].percentage = (student_info[i].total / 5.0);
    
    if (student_info[i].percentage >= 90)
    {
        student_info[i].grade = 'A';
    }else if (student_info[i].percentage >= 80)
    {
        student_info[i].grade = 'B';
    }else if (student_info[i].percentage >= 70)
    {
        student_info[i].grade = 'C';
    }else if (student_info[i].percentage >= 60)
    {
        student_info[i].grade = 'D';
    }else
    {
        student_info[i].grade = 'F';
    }
    
    student_count++;
}

printf("\nDATA ADDED SUCCESFULLY\n");

}

void marksheet(){

    printf("\n----------------------------------------------\n");
    printf("                     MARKSHEET                    ");
    printf("\n----------------------------------------------\n");

    for (int i = 0; i < student_count; i++)
    {

        printf("Name       : %s\n",student_info[i].name);
        printf("Roll No    : %d\n",student_info[i].roll);
        
        printf("\nSubject Marks :\n");
        for (int j = 0; j < 5; j++)
        {
            printf("%s :%.2f\n",subjects[j],student_info[i].marks[j]);
        }

        printf("\n--------------------------------\n");
        printf("Total         : %d\n",student_info[i].total);
        printf("Percentage    : %.2f\n",student_info[i].percentage);
        printf("Grade         : %c\n",student_info[i].grade);
        printf("\n--------------------------------\n");
        
    }
    
}

void searchstudent(){
    int stud_roll;
    printf("\nEnter Student Roll no:\n");
    scanf("%d",&stud_roll);

    int found = 0;
    for (int i = 0; i < student_count; i++)
    {
        if (stud_roll == student_info[i].roll)
        {
            found = 1;
        printf("Name       : %s\n",student_info[i].name);
        printf("Roll No    : %d\n",student_info[i].roll);
        
        printf("\nSubject Marks :\n");
        for (int j = 0; j < 5; j++)
        {
            printf("%s :%.2f\n",subjects[j],student_info[i].marks[j]);
        }

        printf("\n--------------------------------\n");
        printf("Total         : %d\n",student_info[i].total);
        printf("Percentage    : %.2f\n",student_info[i].percentage);
        printf("Grade         : %c\n",student_info[i].grade);
        printf("\n--------------------------------\n");
        break;

        }
        
    }

    if (found == 0)
    {
        printf("\n NO DATA \n");
    }
    
    
}

int main(){
    int choice;
    
    do
    {

        printf("\n******** Marksheet Management ********\n");
        printf("\n1. Add Student\n");
        printf("2. Display All Marksheet\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Exit\n");

        printf("\nEnter your choice:\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            addstudent();
            break;
        case 2:
            marksheet();
            break;
        case 3:
            searchstudent();
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