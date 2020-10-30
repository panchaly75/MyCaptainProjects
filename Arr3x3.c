#include<stdio.h>
int main()
{
    int arr[3][3];                            /*initializing variables*/
    int i,j,sum=0;

    printf("Input elements in the matrix :\n"); /*taking input from users*/
    for(i=0;i<3;i++)                            /*that two loops for rows and columns increment, that makes perfect matrix like structure*/
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",*(arr+i)+j);
        }
    }

    printf("The matrix is :\n");                /*taking output of elements*/
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        	printf("%d\t",*(*(arr+i)+j));
        }
        printf("\n");
    }

    for(i=0;i<3;i++)                            /*loop for diagonal element sum*/
    {
        for(j=0;j<3;j++)
        {
           if(i==j)
           {
               sum = sum + arr[i][j];
           }
        }
    }
    printf("\nAnd the sum of diagonal elements : %d",sum);

    return 0;
}
