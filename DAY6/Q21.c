// Write a program to Convert decimal to binary

#include <stdio.h>

int main (){
    int num,rem ;
    int binary[36];
    printf("Enter the number = ");
    scanf("%d",&num);

    if (num == 0){
        printf("binary number = 0");
        return 0;
    }

    int i = 0;
    while (num > 0)
    {
       rem = num%2;
       binary[i] = rem;
       i++;
       num= num /2;
    }

    for (int j = i-1; j >= 0; j--)
    {
        printf("%d",binary[j]);
    }
    
    return 0;
}