// Write a program to Check perfect number. 

#include <stdio.h>

int main(){
    int Num, sum = 0;
    printf("Enter the number to check for perfect number = ");
    scanf("%d",&Num);

    for (int i = 1; i <= (Num/2); i++)
    {
        if (Num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == Num)
        {
            printf("%d is a perfect number",Num);
        }else{
             printf("%d is not a perfect number",Num);
        }
    
    return 0;
}
