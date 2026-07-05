// Write a program to Create ticket booking system.
#include <stdio.h>
#include <string.h>
struct ticket{

    int bookingID;
    char passengerName[100];
    char startingPoint[100];
    char destination[100];
    int distance;
    int row;
    int column;
    float amount;

};

struct ticket tickets[100];

// decaling a 2d array for dstination
char destination[6][30] = {
    "manali",
    "shimla",
    "kasol",
    "shoja",
    "dharamshala",
    "rishikesh",
};

int fare[6] = {
    1200,
    900,
    1000,
    805,
    950,
    700,
};

//seats
int seats[10][4] = {0}; // intially all seats available

int ticket_count = 0;
int bookingID = 1001;
void bookticket(){
    int no_passanger;
    printf("\nNumber of Passangers:\n");
    scanf("%d",&no_passanger);
    getchar();

    char startingPoint[100];
    printf("\nFrom:\n");
    fgets(startingPoint,sizeof(startingPoint),stdin);
    startingPoint[strcspn(startingPoint,"\n")] = '\0';
    printf("\n");
    

    for (int j = 0; j < 6; j++)
    {
        printf("%d. %s\n",j+1,destination[j]);
        printf("fare = %d\n",fare[j]);
    }

    printf("\nEnter the destination:\n");
    char selected_destination[30];
    scanf("%29s",&selected_destination);
    int choice = -1;
    for (int j = 0; j < 6; j++)
    { 
        if (strcmp(selected_destination, destination[j]) == 0)//incorrect => selected_destination[30] == destination[j]
            // correct way to compare strings
        {
            choice = j;
        }
   
    }

    if(choice == -1)
        {
            printf("\n No bus available\n ");
            return;
        }

    float best_fare = 0;
    
    int tic_coun = ticket_count;
    ticket_count += no_passanger;
    for (int i = tic_coun; i < ticket_count; i++)
    {

        getchar();
        printf("\nName of the passanger:\n");
        fgets(tickets[i].passengerName,sizeof(tickets[i].passengerName),stdin);
        tickets[i].passengerName[strcspn(tickets[i].passengerName,"\n")] = '\0';

        printf("\n     A   B   C   D\n");
        for (int j = 0; j < 10; j++)
        {
            printf("%2d ",j+1);
            for (int k = 0; k < 4; k++)
            {
                if (seats[j][k] == 0)
                {
                    printf("[ ] ");
                }else
                {
                    printf("[X] ");
                }
                
            }
            printf("\n");
            
        }
        
        int row;
        char column;
        printf("Enter Row (1-10):");
        scanf("%d", &row);
        if (row < 1 || row > 10)
        {
            printf("Invalid Row\n");
            return;
        }
        

        printf("Enter Column (A-D): ");
        scanf(" %c", &column);

        // to convert char in column number
        int col;
        if (column == 'a' || column == 'A')
        {
            col = 0;
        }else if (column == 'b' || column == 'B')
        {
            col = 1;
        }
        else if (column == 'C' || column == 'c')
        {
            col = 2;
        }
        else if (column == 'd' || column == 'D')
        {
            col = 3;
        }else
        {
            printf("Invalid Column\n");
            return;
        }
                
        if (seats[row-1][col] == 1)
        {
            printf("Seat Already Booked\n");
            return;
        }else
        {
            seats[row-1][col] = 1;
            printf("\nSeat Selected Successful \n\n");
        }
        

        best_fare += fare[choice];

        // storing all data
        tickets[i].bookingID = bookingID;
        strcpy(tickets[i].startingPoint, startingPoint);
        strcpy(tickets[i].destination, destination[choice]);
        tickets[i].row = row;
        tickets[i].column = col;
        tickets[i].amount = fare[choice];
    }

    printf("Booking Id : %d\n",tickets[tic_coun].bookingID);
    for (int i = 0; i < ticket_count; i++)
    {
        printf("Passengers name  :%s\n",tickets[i].passengerName);
        printf("seat :%d%c\n",(tickets[i].row),tickets[i].column + 'A');

    }
    printf("Destination  : %s\n",tickets[tic_coun].destination);
    
    printf("Total fare: %.2f",best_fare);

    char confirmation;
    printf("\nConfirm?  Y/N\n");
    scanf(" %c",&confirmation);

    if (confirmation == 'y' || confirmation == 'Y')
    {
        printf("\nBooking confirm\n");
    }else
    {
        printf("\ncancelled");
       
        for (int i = tic_coun; i < ticket_count; i++)
        {
            seats[tickets[i].row-1][tickets[i].column] = 0;
            
        }

         ticket_count = tic_coun;
        
    }
}

int main(){
    int choice;
    
    do
    {
        printf("\n============ BOOKING SYSTEM =======================\n ");
        printf("1. Book Ticket\n");
        printf("2. exit\n");


        scanf("%d",&choice);
        switch (choice)
        {
        case  1: bookticket(); break;
        case  2: 
            printf("Thank you"); break;
        default:
        printf("\n****** ERORR *********\n");
            break;
        }

    } while (choice != 2);
    
}