#include<stdio.h>
#include<stdbool.h>                          /*including boolean functions library*/
int prime(int n,int i);                      /*declaration of function*/

int main()
{
	int i,n;
	bool ans;
	
	printf("Enter a number: ");              /*taking input by the users*/
	scanf("%d",&n);
	
	ans =prime(n,n-1);                       /*calling function*/
	if(ans == true)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}
	
	return 0; 
}

int prime(int n,int i)                       /*function definition*/
{
	
	return (n%i==0?(i==1?1:0):prime(n,i-1));
}
