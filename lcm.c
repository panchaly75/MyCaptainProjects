#include<stdio.h>
int lcm(int a, int b);                           /*declaration of function for findind lcm using another function for gcd*/
int gcd(int a,int b);
int main()
{
	int i,j,ans;
	                                            
	printf("Input first number: ");              /*taking input*/
	scanf("%d",&i);
	printf("Input second number: ");
	scanf("%d",&j);
	
	printf("LCM of %d and %d = %d",i,j,lcm(i,j));/*output*/
	
	return 0;
}

/*by the basics of lcm and gcd we find that 
  
  lcm(i,j) * gcd(i,j) = i*j */
 
int gcd(int a,int b)                             /*defined function for gcd*/
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}

int lcm(int a,int b)                             /*defined function for lcm*/
{
	return ((a*b)/gcd(a,b));
}
