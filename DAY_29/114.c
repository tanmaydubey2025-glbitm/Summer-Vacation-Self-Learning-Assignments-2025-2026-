// Write a program to Create menu-driven array operations system.

#include <stdio.h>

int arr[100];
int n = 0;

void insertelement(){
    if (n >= 100)
    {
        printf("\narray is full can not insert more elements\n");
        return;
    }
    
    int val,position;
    printf("Enter the value you want to enter:");
    scanf("%d",&val);
    printf("Enter the position between 1 to %d:",n+1);
    scanf("%d",&position);

    if (position > 100 || position < 1)
    {
        printf("Invalid position!\n");
        return;
    }
    
    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i-1];//left shift 
    }
    arr[position-1] = val;
    n++;
    printf("Element is inserted successfully");

}

void display(){
    if (n == 0)
    {
        printf("\n Array is Empty\n ");
        return;
    }
    printf("All elemensts:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\n");
}

void deletedelem(){
    int choice;
    printf("\n how you want to delete\n");
    printf("1. By position\n");
    printf("2. By value \n");
    printf("Enetr your choice:");
    scanf("%d",&choice);


    if (choice == 1)
    {
        int pos;
        printf("Enter position to delete between 1 to %d",n);
        scanf("%d",&pos);
        for (int i = pos-1; i < n-1; i++)
        {
            arr[i] = arr[i+1];
        }
        n--;
        printf("\nElement deleted successfully\n");
    }

    if (choice == 2)
    {
       int value;
        printf("Enter the value you want to delete from array;");
        scanf("%d",&value);

        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != value)
            {
                arr[j] = arr[i];
                j++;
            }
            
        }
        n = j;
    }

}

void searchelem(){
    int val,found = 0;

    printf("Enter value to search: ");
    scanf("%d",&val);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
        
    }
    
    if(found == 0){
        printf("\nElement not found\n");
    }
}

void sortArray(){

    int order;
    printf("Sort in \n1. Ascending \n2. Descending\nEnter choice: ");
    scanf("%d", &order);

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (((order == 1) && (arr[j] > arr[j+1])) ||
                ((order == 2) && (arr[j] < arr[j+1]))) 
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    printf("Array sorted successfully.\n");
    display();
}


void maxmin(){
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    
    }
    
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
}

int main() {
    int choice;
 
    do {
        printf("\n===== ARRAY OPERATIONS MENU =====\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Search Element\n");
        printf("4. Display Array\n");
        printf("5. Sort Array\n");
        printf("6. Find Maximum and Minimum\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
 
        switch (choice) {
            case 1: insertelement();  break;
            case 2: deletedelem();  break;
            case 3: searchelem();  break;
            case 4: display();   break;
            case 5: sortArray();      break;
            case 6: maxmin();     break;
            case 7: printf("Exiting\n"); break;
            default: 
            printf("\nError\n");
        }
    } while (choice != 7);
 
    return 0;
}