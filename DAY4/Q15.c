//Write a program to Check Armstrong number

#include <stdio.h>
#include <math.h>

int main(){
    int Num;
    printf("Enter the number = ");
    scanf("%d",&Num);
    int n1=Num;
    int n2=Num;

    // count of the number
    int count= 0;
    while( Num != 0){
        Num = Num/10;
        count++;
    }

    //POWER OF DIGITS OF NUMBER
    int rem,sum=0;
    while (n1 != 0)
    {
        rem = n1%10;
        sum += pow(rem,count);
        n1=n1/10;

    }

    //verification
    if (n2 == sum)
    {
        printf("%d is an Armstrong number",sum);
    }else{
        printf("%d is not an Armstrong number",n2);
    }
    
    return 0;
}