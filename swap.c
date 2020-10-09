#include<stdio.h>
int main()
{
    int x,y;
                                                                     
    printf("Enter a number (x):");                                  /*taking 1st number as input*/ 
    scanf("%d",&x);

    printf("Enter a number (y):");                                  /*taking 1st number as input*/
    scanf("%d",&y);

    x = x*y;                                                        /*logic for swapping*/ 
    y = x/y;
    x = x/y;

    printf("after swapping numbers:\nx = %d\ny = %d",x,y);          /*for taking output*/

    return 0;
}
