// Write a program to Count even and odd
// elements

#include <stdio.h>

int main(){
    int Arr[100],n;
    printf("Enter number of elements = ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&Arr[i]);
    }

    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            even++;
        }else{
            odd++;
        }
    }

    printf("No. of odd elements = %d \n",odd);
    printf("No. of even elements = %d \n",even);
    
    return 0;
}