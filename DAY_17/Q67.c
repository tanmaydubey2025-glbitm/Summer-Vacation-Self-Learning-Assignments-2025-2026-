// Write a program to Intersection of arrays

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

    int IntersectionArr[100];
    int ArrrSize = 0;

    for (int i = 0; i < n1; i++)
    {
        int found = 0;
        int present = 0;

        for (int j = 0; j < n2; j++)
        {
            if (ARR1[i] == ARR2[j])
            {
                found = 1;
                break;
            }            
        }

        for (int j = 0; j < ArrrSize; j++)
        {
            if (ARR1[i] == IntersectionArr[j])
                {
                    present = 1;
                    break;
                }
        }
        
        if (present == 0 && found == 1)
        {
            IntersectionArr[ArrrSize] = ARR1[i];
            ArrrSize++;
        }
        
    }
    
    printf("Intersection of arrays :- \n");
    for (int i = 0; i < ArrrSize; i++)
    {
       printf("%d, ",IntersectionArr[i]);
    }

    return 0;
}