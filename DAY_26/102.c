// Write a program to Create voting eligibility system.

#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("Enter number of voters:\n");
    scanf("%d",&n);
    getchar();

    char NAMES[10][100];
    printf("Enter details of voters:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nNAME - ");
        fgets(NAMES[i],sizeof(NAMES[i]),stdin);

        NAMES[i][strcspn(NAMES[i], "\n")] = '\0';

        printf("AGE =>");
        int age;
        scanf("%d",&age);
        getchar();

        if (age <0)
        {
            printf("invalid entery");
            i--;
        }else if (age < 18 )
        {
            printf("\n%s is underage\n",NAMES[i] );
        }else
        {
            printf("\n%s is eligible \n",NAMES[i]);
        }

    }

    return 0;
}