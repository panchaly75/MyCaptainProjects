#include<stdio.h>
int main()
{
    int marks=0;
    //take marks as input
    printf("Enter marks (out of 100):\n");
    scanf("%d",&marks);
    
    //take dicission according to grade calculation and give output on screen
    if(marks>=85 && 101>marks)
    printf("Grade : A");
    else if(marks>=70 && 85>marks)
    printf("Grade : B");
    else if(marks>=55 && 70>marks)
    printf("Grade : C");
    else if(marks>=40 && 55>marks)
    printf("Grade : D");
    else if(marks>=0 && 40>marks)
    printf("Grade : F");
    else
    printf("error");   //using this else to inform that your marks either lesser than zero or greater than 100
    
    return 0;
}
