// Write a program to Find GCD of two numbers. 
#include <stdio.h>

int GCD(int a, int b){
    if (b == 0)
    {
       return a;
    }else{
        return GCD(b, a % b);
    }

}

int main(){
    int num1,num2;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d %d",&num1,&num2);

    int result = GCD(num1,num2);
    printf("Gcd of two numbers is = %d",result);


    return 0;
}
