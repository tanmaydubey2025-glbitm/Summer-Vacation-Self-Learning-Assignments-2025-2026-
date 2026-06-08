// Write a program to Find largest prime factor

#include <stdio.h>

int main(){
    int Num;
    printf("Enter the number = ");
    scanf("%d",&Num);

    int largest = 0;
    while (Num % 2 == 0)
    {
        largest = 2;
        Num = Num/2;
    }

    int i = 3;
    while (i <= Num)
    {
        while (Num % i == 0)
        {
            largest = i;
            Num = Num/i;
        }
        
        i = i+2;
    }

    printf("largest prime factor is = %d",largest);

    return 0;
}