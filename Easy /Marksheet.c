#include <stdio.h>

int main(){
    int marks1, marks2, marks3;

        //Write a program to determine whether a student has passed or failed. To pass, a
        //student requires a total of 40% and at least 33% in each subject. Assume there
        //are three subjects and take the marks as input from the user.
    
    printf("enter marks1: \n");
    scanf("%d", &marks1);
     printf("enter marks2: \n");
    scanf("%d", &marks2);
     printf("enter marks3: \n");
    scanf("%d", &marks3);
    printf("the marks are %d %d %d\n", marks1,marks2,marks3);

    if (marks1<33||marks2<33||marks3<33)
    {
        printf("you are failed due to less marks in each subject(s)\n");
    }
    else if ((marks1+marks2+marks3)/3 <40){
        printf("you are failed due to less percenatge\n");

    }
    else{
        printf("you are passed\n");
    }
    
        
    
    
    
    
    
    
    return 0;
}