// Write a program to Second largest element

#include <stdio.h>

int main(){
    int Arr[] = {1,2,3,34,23,21,34,43,4,23};
    int n = 10;

    int larger = Arr[0];
    int smaller = Arr[0];

    for (int i = 0; i < n; i++)
    {
        if (Arr[i] > larger)
        {
            int temp = Arr[i];
            smaller = larger;
            larger = temp;
        }else if ( Arr[i] > smaller && Arr[i] != larger)
        {
            smaller = Arr[i];
        }
        
    }

    printf("%d",smaller);

return 0;
}