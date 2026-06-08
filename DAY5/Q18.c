// Write a program to Check strong number. 

#include <stdio.h>

int main(){
    int Num; 
    printf("Enter the number to verify for strong number = ");
    scanf("%d",&Num);
    int N1 =Num;

    int sum =0;
    while (Num != 0)
    {
       int rem = Num%10;

       int fact =1;
       for (int i = 1; i <= rem; i++)
       {
        fact = fact*i;
       }
       sum += fact;

       Num = Num/10;
    }

    if (N1 == sum)
    {
        printf("%d is a strong number",N1);
    }else{
        printf("%d is not a strong number",N1);
    }
    
    return 0;
}