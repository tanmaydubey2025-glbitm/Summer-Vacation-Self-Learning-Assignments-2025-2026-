// Write a program to Write function for
// palindrome

#include <stdio.h>

void palindrome(int n){
    int sum = 0;
    int temp = n;
    while (n != 0)
    {
        int rem = n % 10;
        sum = sum*10 + rem;
        n = n / 10;
    }
    
    if ( temp == sum)
    {
       printf("%d is a palindrome",temp);
    }else
    {
        printf("%d is not a palindrome",temp);
    }
    
}

int main(){
    int num;
    printf("Enter number for palindrome = ");
    scanf("%d",&num);

    palindrome(num);

    return 0;
}