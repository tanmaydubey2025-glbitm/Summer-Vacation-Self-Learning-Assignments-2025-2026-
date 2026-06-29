// Write a program to Create quiz application. 
#include <stdio.h>
int main(){
    printf("THE QUIZ CONTAIN 3 QUESTION\n");
    printf("\n are you ready to begin Y/N ?\n");
    char start;
    scanf("%c",&start);

    if (start != 'y' && start != 'Y')
    {
        return 0;
    }
    
    char *questions[] = {

    "\nquestions 1..What is the capital of India? \n1. Mumbai \n2. New Delhi\n3. Chennai\n4. Kolkata\n",

    "\nquestions 2..Which planet is known as the Red Planet?\n1. Earth\n2. Venus\n3. Mars\n4. Jupiter\n",

    "\nquestions 3..hich language is primarily used for Android app development?\n1. Java\n2. Python\n3. C\n4. HTML"};
    
    int ans_num[] = {2,3,1};

    int score = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n",questions[i]);
        // anwer
        // option check
        int ans;
        printf("choose your option:\n");
        scanf("%d",&ans);

        if (ans == ans_num[i])
        {
            printf("correct \n Answer = %d \n",ans_num[i]);
            score++;
        }else{
            printf("Incorrect \n Answer = %d \n",ans_num[i]);
        }
        
    }

    printf("Your final score = %d/3",score);
    
    return 0;
}