// Write a program to Merge two sorted arrays. 

#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter number of elemets of first and second array:\n");
    scanf("%d %d",&n1,&n2);

    int arr1[n1];
    printf("Enter elements of first array: \n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    int arr2[n2];
    printf("Enter elements of second array: \n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&arr2[i]);
    }

    int Merge[n1+n2];
    for (int i = 0; i < n1; i++)
    {
        Merge[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        Merge[ n1 + i] = arr2[i];
    }
    
    for (int i = 0; i < (n1+n2)-1; i++)
    {
        for (int j = 0; j < (n1+n2)-1; j++)
        {
            if (Merge[j] > Merge[j+1])
            {
                int temp = Merge[j];
                Merge[j] = Merge[j+1];
                Merge[j+1] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < (n1+n2); i++)
    {
        printf("%d, ",Merge[i]);
    }
    
    return 0;
}