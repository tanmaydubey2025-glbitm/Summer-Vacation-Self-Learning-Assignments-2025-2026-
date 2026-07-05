// Write a program to Create contact management system.

#include <stdio.h>
#include <string.h>

struct contact {
    char name[100];
    char phone[50];
    char email[50];
    char address[100];

};

struct contact contacts[100];

int contact_count = 0;

void addcontact(){
    getchar();

    printf("\nEnter Name:");
    fgets(contacts[contact_count].name,sizeof(contacts[contact_count].name),stdin);
    contacts[contact_count].name[strcspn(contacts[contact_count].name,"\n")] = '\0';

    printf("Enter contact number:");
    fgets(contacts[contact_count].phone,sizeof(contacts[contact_count].phone),stdin);
    contacts[contact_count].phone[strcspn(contacts[contact_count].phone,"\n")] = '\0';

    printf("Enter Email Address:");
    fgets(contacts[contact_count].email,sizeof(contacts[contact_count].email),stdin);
    contacts[contact_count].email[strcspn(contacts[contact_count].email,"\n")] = '\0';

    printf("Enter Address:");
    fgets(contacts[contact_count].address,sizeof(contacts[contact_count].address),stdin);
    contacts[contact_count].address[strcspn(contacts[contact_count].address,"\n")] = '\0';

    printf("\nContact Added Successfully\n");

    contact_count++;
}

void viewcontact(){
    printf("\n--------- CONTACT DETAILS --------------\n");

    for (int i = 0; i < contact_count; i++)
    {
        printf("%d\n",i+1);
        printf("Name   : %s\n",contacts[i].name);
        printf("Phone  : %s\n",contacts[i].phone);
        printf("Email  : %s\n",contacts[i].email);
        printf("Address : %s\n",contacts[i].address);
        printf("\n--------------------------------\n");
        
    }
    
}
void search(){
    char phone_no[50];
    printf("Enter phone number:");
    fgets(phone_no,sizeof(phone_no),stdin);
    phone_no[strcspn(phone_no,"\n")] = '\0';

    int found = 0;
    for (int i = 0; i < contact_count; i++)
    {
        if (strcpy(phone_no,contacts[i].phone) == 0)
        {
            printf("\nName   : %d\n",contacts[i].name);
            printf("Phone  : %s\n",contacts[i].phone);
            printf("Email  : %s\n",contacts[i].email);
            printf("Address : %s\n",contacts[i].address);
            found = 1;

        }
    }

    if (found == 0)
    {
        printf("\nNo Contact found\n");
    }
    
}

void deletecontact(){
char phone_no[50];
    printf("Enter phone number:");
    fgets(phone_no,sizeof(phone_no),stdin);
    phone_no[strcspn(phone_no,"\n")] = '\0';

    int found = 0;
    for (int i = 0; i < contact_count; i++)
    {
        if (strcpy(phone_no,contacts[i].phone) == 0){
            found = 1;
            for (int j = i; j < contact_count; j++)
            {
                contacts[j] = contacts[j+1];
            }
            printf("\nContact deleted Successfully\n");
        }
    }

    if (found == 0)
    {
        printf("\nIncorrect entery\n");
    }
    
    
}


int main(){
    int choice;

    do
    {

        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. exit\n");

        printf("\nSelect you option\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1: addcontact(); break;
        case 2: viewcontact(); break;
        case 3: search(); break;
        case 4: deletecontact(); break;
        case 5: 
            printf("\nThank You\n");
            return 0; break;
        
        default:
        printf("\n**ERORR**\n");
            break;
        }
    } while (choice != 5);
    

    return 0;
}