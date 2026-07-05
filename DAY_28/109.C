// Write a program to Create library management system.
#include <stdio.h>
#include <string.h>


struct books {

    int book_id;
    char title[100];
    char author[100];
    char category[100];
    int quantity;
    int issued;

};

struct student
{
    char name[100];
    int student_id;
    char phone[100];
    int year;
};


struct books library[100];


int book_count = 0;
void addbook(){
    int book_num;
    printf("\nEnter number of books:\n");
    scanf("%d",&book_num);

    
    for (int i = book_count; i < book_num; i++)
    {
        book_count += book_num;
    getchar();
    printf("\nEnter the title of the book:\n");
    fgets(library[i].title,sizeof(library[i].title),stdin);
    library[i].title[strcspn(library[i].title,"\n")] = '\0';

    printf("\nEnter the author name:\n");
    fgets(library[i].author,sizeof(library[i].author),stdin);
    library[i].author[strcspn(library[i].author,"\n")] = '\0';

    printf("\nEnter Book id: \n");
    scanf("%d",&library[i].book_id);
    getchar();

    printf("\nEnter the book categoryt:\n");
    fgets(library[i].category,sizeof(library[i].category),stdin);
    library[i].category[strcspn(library[i].category,"\n")] = '\0';

    printf("Enter Book quantity: \n");
    scanf("%d",&library[i].quantity);

    library[i].issued = 0;

    }
}

struct student details[100];

int issue = 0;
void issuebook(){
    getchar();
    printf("\nEnter the Name of the Student:\n");
    fgets(details[issue].name,sizeof(details[issue].name),stdin);
    details[issue].name[strcspn(details[issue].name,"\n")] = '\0';

    printf("\nEnter the Student Phone number:\n");
    fgets(details[issue].phone,sizeof(details[issue].phone),stdin);
    details[issue].phone[strcspn(details[issue].phone,"\n")] = '\0';

    printf("Enter student ID\n");
    scanf("%d",&details[issue].student_id);

    int bookid;
    printf("Enter Book id\n");
    scanf("%d",&bookid);

    for (int i = 0; i < book_count; i++)
    {
        if (bookid == library[i].book_id)
        {
            if (library[i].issued < library[i].quantity)
            {
            printf("Book title    : %s",library[i].title);
            printf("Author     : %s\n",library[i].author);
            printf("Category   : %s\n",library[i].category);
            printf("\nBook Issued Successfully.\n");
            library[i].issued++;
            
            }else
        {
            printf("No Copies Available.\n");
        }
        return;
        }else
        {
            printf("Book ID not found.\n");
        }
        
        
    }
    issue++;
    
}

void displaybook(){
    printf("\n--------- BOOK DETAILS --------------\n");

    int found = 0;
    for (int i = 0; i < book_count; i++)
    {
        if (library[i].issued > 0)
        {
        int available = library[i].quantity - library[i].issued;
        printf("\n--------------------------------\n");
        printf("Book id    : %d\n",library[i].book_id);
        printf("Title      : %s\n",library[i].title);

        printf("Author     : %s\n",library[i].author);
        printf("Category   : %s\n",library[i].category);
        printf("Quantity  : %d\n", library[i].quantity);
        printf("Available   : %d\n",available);
        printf("No of Issued    : %d\n",library[i].issued);
        printf("\n--------------------------------\n");
        found = 1;

        }
        
        
        
    }

    if (found == 0)
    {
        printf("\nno book issued\n");
    }
    
    
}

void returnbook(){

    int student_id;
    printf("Enter student ID\n");
    scanf("%d",&details[issue].student_id);

    int bookid;
    printf("Enter Book id\n");
    scanf("%d",&bookid);
    for (int i = 0; i < issue; i++)
    {
        if (student_id = details[i].student_id)
        {
            printf("student name: %s",details[i].name);
        }
        
    }
    
    for (int i = 0; i < book_count; i++)
    {
        if (bookid == library[i].book_id)
        {
            if (library[i].issued > 0)
            {
            printf("Book title    : %s",library[i].title);
            printf("Author     : %s\n",library[i].author);
            printf("Category   : %s\n",library[i].category);
            printf("\nBook return Successfully.\n");
            library[i].issued--;
            }else
            {
                printf("This book is not issued.\n");
            }
        }

        return;
        
    }
}


int main(){
    int choice;

    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Issued Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: addbook(); break;
            case 2: displaybook(); break;
            case 3: issuebook(); break;
            case 4: returnbook(); break;
            case 5: 
                printf("Thank You!\n"); break;
            default: 
               printf("\n     *ERROR*    \n");
               break;
        } 
    }while(choice != 5); 

return 0;
}


