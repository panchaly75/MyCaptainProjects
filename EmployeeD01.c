#include<stdio.h>

struct employee{                                                      /*initializing structure employee*/
	char empName[50];
	char empDept[50];
	int empAge;
	long long int empNo;
	int empSal;
};

struct employee emp[20];                                             /*making array of that structure*/
int count=0;                                                         /*initalizing counter for display loop*/
void addingDetail(int i);                                            /*function for addind detailes*/
void disply(int j);                                                  /*function for display the detail*/

main()
{
	int n,i=0;

	do                                                               /*do-while loop make it easy to use multiple time*/
	{
		printf("------------------------------------Employee_Info--------------------------------------------");
	    printf("\n\nChoose\n'1' for adding detailes\n'2' for display\n'0' for exit\n");                                
    	scanf("%d",&n);

    	if(n==1)
    	{
	    	if(i<20)
	    	{
		    	printf("Adding a detailes:\n");
	    	  addingDetail(i);                                      /*adding detail function calling*/
	        i++;
	   	    count++;
		    }
	    }
	    else if(n==2)
	    {
		    printf("________________________Employee__Detailes_________________________\n");
		    disply(count);                                            /*display function calling*/
		    printf("\n\n---------------------------------------------------------------------------------------------------------------------------\n");
	    }
	}while(n!=0);
	
	return;

}

void addingDetail(int i)                                            /*adding detail function definitation*/
{
	printf("%d\n",i+1);
	printf("Name\t:\t");
	scanf("%s",emp[i].empName);
	printf("Department\t:\t");
	scanf("%s",emp[i].empDept);
	printf("Age\t:\t");
	scanf("%d",&emp[i].empAge);
	printf("Mobile No.\t:\t");
	scanf("%lld",&emp[i].empNo);
	printf("Salary\t:\t");
	scanf("%d",&emp[i].empSal);
	
	return;
}

void disply(int j)                                                /*display function definitation*/
{
	int i=0;
	for(i=0;i<j;i++)
	{
		printf("\n%d\n",i+1);
	  printf("Name\t:\t%s",emp[i].empName);
  	printf("\nDepartment :\t%s",emp[i].empDept);
   	printf("\nAge\t:\t%d",emp[i].empAge);  
    printf("\nMobile No. :\t%lld",emp[i].empNo);
	  printf("\nSalary\t:\t%d\n",emp[i].empSal);
	}
	return ;
}
