// Write a program to Recursive sum of digits

#include <stdio.h>

int sumOfDigits(int n){

    if(n == 0 ){
        return 0;
    }

    return (n % 10) + sumOfDigits((n/10));
}

int main(){
    int Num;
    printf("Enter the number = ");
    scanf("%d",&Num);

    int result = sumOfDigits(Num);

    printf("sum of digits 0f %d = %d",Num,result);
    
    return 0;
}
    