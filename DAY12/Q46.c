// Write a program to Write function for
// Armstrong.

#include <stdio.h>
#include <math.h>

void Armstrong(int num){

    int temp1 = num;
    int temp2 = num;

    int count = 0;
    while (num != 0)
    {
        int rem = num % 10;
        num = num / 10;
        count++;
    }

    int sum = 0;
    while (temp1 != 0)
    {
        int rem = temp1 % 10;
        sum +=  pow(rem,count);
        temp1 = temp1 / 10;
    }

    if (sum == temp2)
    {
        printf("%d ia an Armstrong number",temp2);
    }else
    {
        printf("%d ia not an Armstrong number",temp2);
    }
}

int main(){
    int num;
    printf("Enter the number = ");
    scanf("%d",&num);

    Armstrong(num);

    return 0;
}