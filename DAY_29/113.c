// Write a program to Create menu-driven calculator.
#include <stdio.h>

float addition(int n){
    float num, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the %d number:",i);
        scanf("%f",&num);
        sum += num;
    }
    return sum;
}

float subtraction(int n){
    float num, result = 0;

    printf("Enetr 1st number:");
    scanf("%f",&result);

    for (int i = 2; i <= n; i++)
    {
        printf("Enter the %d number:",i);
        scanf("%f",&num);
        result -= num;
    }
    return result;
}

float mul(int n){
    float num, product = 1;
    for (int i = 1; i <= num; i++)
    {
        printf("Enter the %d number:",i);
        scanf("%f",&num);
        product = product * num;
    }
    return product;
}

float div(int n){

    float num, div;
    printf("Enter the 1 number");
    scanf("%f",&div);

    for (int i = 2; i <= n; i++)
    {
        printf("Enter the %d number:",i);
        scanf("%f",&num);

        if (num == 0)
        {
            printf("Error\n");
            return 0;
        }
        div = div / num;
    }

    return div;
}


int main() {
    int choice, count;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("How many numbers do you want to enter?");
            scanf("%d", &count);

            if (count < 2) {
                printf("Please enter at least 2 numbers.\n");
                continue;
            }
        }

        switch (choice) {
            case 1:
                printf("\nResult = %.2f\n", addition(count));
                break;

            case 2:
                printf("\nResult = %.2f\n", subtraction(count));
                break;

            case 3:
                printf("\nResult = %.2f\n", mul(count));
                break;

            case 4:
                printf("\nResult = %.2f\n", div(count));
                break;

            case 5:
                printf("\nThank u\n");
                break;

            default:
                printf("\nError\n");
        }

    } while (choice != 5);

    return 0;
}