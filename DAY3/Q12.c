// Write a program to Find LCM of two numbers

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
    int firstNum,secondNum,lcm;
    printf("Enter the two number \n");
    scanf("%d %d",&firstNum,&secondNum);

    /* if (firstNum>secondNum)
    {
        biggerNum = firstNum;
    }else{ biggerNum = secondNum; } */

    lcm = (firstNum > secondNum) ? firstNum : secondNum;

    while (1)
    // while(1) is used for infinite loop (1=true)
    //if we want to use while(ture) headear(#include <stdbool.h>) is important.
     {
        if ( lcm%firstNum == 0 && lcm%secondNum == 0 )
        {
            printf("LCM = %d \n",lcm);
            break;
        }else{
            lcm++;
        }
        
    }





//**************************************  LCM using GCD function  ****************************************
//gcd is faster




    int a,b;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d %d",&a,&b);

    int LCM = (a * b) / GCD(a,b);

    printf("LCM USING GCD= %d",LCM);
    

return 0;
}