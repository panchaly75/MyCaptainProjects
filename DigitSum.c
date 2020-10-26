#include<stdio.h>
int digitSum(int n);       /*function declaration for sum of digits of a given number*/
int main()
{
    int n,sum;

    printf("Input number: ");     /*taking input by the user*/
    scanf("%d",&n);

    sum = digitSum(n);            /*function calling*/

    printf("Sum of digit: %d",sum);  /*taking output*/

    return 0;
}

int digitSum(int n)                /*function definition*/
{
    if(n==0)
    {
        return 0;
    }
    return (n%10 + digitSum(n/10));     /*make it recursive by that logic*/
}
