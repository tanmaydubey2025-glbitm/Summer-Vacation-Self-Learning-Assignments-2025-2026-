// Write a program to Union of arrays

#include <stdio.h>
int main(){
    int ARR1[100],ARR2[100];
    int n1,n2;
    printf("Enter number of elem in 1st and 2nd array \n");
    scanf("%d %d",&n1,&n2);

    printf("Enter elem of 1st array \n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&ARR1[i]);
    }
    printf("\n");

    printf("Enter elem of 2st array \n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&ARR2[i]);
    }
    printf("\n");

    int unionArr[100];
    int uniSize = 0;
    
    for (int i = 0; i < n1; i++)
    {
        int found = 0;

        for (int j = 0; j < uniSize; j++)
        {
            
            if (unionArr[j] == ARR1[i])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            unionArr[uniSize] = ARR1[i];
            uniSize++;
        }
        
    }

    for (int i = 0; i < n2; i++)
    {
        int found = 0;

        for (int j = 0; j < uniSize; j++)
        {
            
            if (unionArr[j] == ARR2[i])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            unionArr[uniSize] = ARR2[i];
            uniSize++;
        }
    }

    printf("Union of arrays :- \n");
    for (int i = 0; i < uniSize; i++)
    {
       printf("%d, ",unionArr[i]);
    }
    

    return 0;
}