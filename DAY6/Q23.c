// Write a program to Count set bits in a number. 
#include <stdio.h>

int main(){
    int Num;
    printf("Enter the value = ");
    scanf("%d",&Num);
    int temp = Num;

    /* concept 
    approch 1 - covert decimal into binary and then count 1 (less efficient )
    approch 2 - since (Every number in memory is already stored in binary internally)
    work directly on decimal */ 

    int count = 0;
    while ( Num != 0)
    {
        int rem = Num % 2;
        if (rem == 1)
        {
            count++;
        }
        Num = Num / 2;
    }

    printf("set of bits in %d  = %d",temp,count);
    
    return 0;
}