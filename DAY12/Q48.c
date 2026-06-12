//  Write a program to Write function for perfect
//  number.

#include <stdio.h>

void perNum(int num){

    int temp = num;
    int sum =0;

    for (int i = 1; i <= (num/2); i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
        
    }

    if (sum == temp)
    {
        printf("%d is a perfect number ",temp);
    }else
    {
        printf("%d is not a perfect number ",temp);
    }
    
}

int main(){
    int num;
    printf("Enter number = ");
    scanf("%d",&num);

    perNum(num);

    return 0;
}