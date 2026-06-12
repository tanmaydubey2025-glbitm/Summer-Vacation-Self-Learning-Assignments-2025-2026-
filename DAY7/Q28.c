// Write a program to Recursive reverse number

#include <stdio.h>

int rev(int n, int n2)
{
    if (n == 0)
    {
        return n2;
    }

    return rev((n / 10), (n2 * 10) + (n % 10));
}

int main(){
    int num;
    printf("Enter a number = ");
    scanf("%d", &num);

    int result =  rev(num, 0);
    printf("Reversed number = %d \n",result);

    return 0;
}