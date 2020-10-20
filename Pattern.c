#include<stdio.h>
int main()
{
    /*intialize variables*/
    int i,j,n;
    
    /*taking input for number of stairs*/
    printf("Enter how much number of stairs you want?\n= ");
    scanf("%d",&n);
    
    /*logic for making pattern using for loop*/
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("01");
        }
        printf("\n");
    }
    return 0;
}
