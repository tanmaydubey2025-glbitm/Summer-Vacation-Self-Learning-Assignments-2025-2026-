//Write a program to Print multiplication table of a given number.
#include <stdio.h>

int main(){
    int n,end, mul =1;

    printf("enter the table number = ");
    scanf("%d",&n);

    printf("enter the end point of table = ");
    scanf("%d",&end);



    for (int i = 1; i <= end; i++)
    {
       mul = n*i;
       printf("%d * %d = %d \n ",n,i,mul);
    }
    
    return 0;
}