// Write a program to Print Armstrong numbers in a range

#include <stdio.h>
#include <math.h>

int main(){
    int range;
    printf("Enter the range = ");
    scanf("%d",&range);


    for (int i = 0; i <= range; i++)
    {

        int temp = i;
        int sum = 0;
        int count = 0;

       while( temp != 0){
        temp = temp/10;
        count++;
    }

        temp = i;
        while (temp != 0)
    {
        int rem = temp%10;
        sum += pow(rem,count);
        temp=temp/10;
    }

        
        if (sum == i)
        {
        printf("%d \n",sum);
        
        }
    }
    
    return 0;
}