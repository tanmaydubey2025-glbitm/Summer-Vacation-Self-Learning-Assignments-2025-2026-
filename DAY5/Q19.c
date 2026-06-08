//Write a program to Print factors of a number

#include <stdio.h>

int main(){
    int Num;
    printf("Enter the number = ");
    scanf("%d",&Num);

    printf("factors of %d are \n",Num);
    for (int i = 1; i <= Num; i++)
    {
       if (Num % i == 0)
       {
        printf("%d ,",i);
       }
    }

    return 0;
}