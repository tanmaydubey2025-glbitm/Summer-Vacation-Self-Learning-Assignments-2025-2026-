// Write a program to Print prime numbers in a range.

#include <stdio.h>

int main(){
    int num, isPrime= 1;
    printf("Enter the range to find possible prime number = ");
    scanf("%d",&num);

    if (num <= 1)
    {
        printf("N0 possible prime numbers");
    }else{
            for (int i = 2; i <= num; i++) 
        {
            isPrime =1;

             for (int j = 2; j < i; j++)
            {
                if (i%j == 0)
                {
                    isPrime = 0;
                    break;
                }
                
            }

            if (isPrime==1)
            {
                printf("%d \n",i);
            }
        }
    }

    if (isPrime == 1)
    {
        /* code */
    }
    

    return 0;
}