// Write a program to Convert binary to decimal

#include <stdio.h>
#include <math.h>

int main(){
    int BinaryNum;
    printf("Enter binary number");
    scanf("%d",&BinaryNum);
    int Valid = 1;
    
    int temp = BinaryNum;
    int per = BinaryNum;

    while (temp != 0)
    {
        int rem = temp % 10;

        if (rem != 0 && rem != 1 )
        {
            Valid = 0;
            break;
        }

        temp = temp/10;
    }
    
    if (Valid == 0)
    {
        printf("incorrect entery");
        return 0;
    }

    int sum = 0;
    int i =0;
    while (BinaryNum != 0)
    {
        int rem = BinaryNum % 10;
        sum += rem * pow(2,i);
        i++;

        BinaryNum = BinaryNum/10;
    }
    
    printf("%d = %d",per,sum);
    
    return 0;
}