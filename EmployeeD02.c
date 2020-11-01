#include<stdio.h>

struct employee{
	char empName[50];
	char empDept[50];
	int empAge;
	long long int empNo;
	int empSal;
};

struct employee emp[20];
int count=0;
void addingDetail(int i);
void disply(int j);

main()
{
	int n,i=0;

	do
	{
		printf("------------------------------------Employee_Info--------------------------------------------");
	  printf("\n\nChoose\n'1' for adding detailes\n'2' for display\n'0' for exit\n");
    scanf("%d",&n);

    if(n==1)
   	{
	   	if(i<20)
    	{
        printf("Adding a detailes:\n");
	      addingDetail(i);
	   	  i++;
	      count++;
	    }
    }
    else if(n==2)
	  {
	    printf("________________________Employee__Detailes_________________________\n");
      printf("\t\tName\tDepartment\tAge\tMobile No.\tSalary\n");
		  disply(count);
	    printf("\n\n---------------------------------------------------------------------------------------------------------------------------\n");
    }
	}while(n!=0);
	
	return;

}

void addingDetail(int i)
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

void disply(int j)
{
	int i=0;
	for(i=0;i<j;i++)
	{
		printf("\n%d\t",i+1);
	  printf("%s\t",emp[i].empName);
    printf("%s\t",emp[i].empDept);
    printf("%d\t",emp[i].empAge);  
	  printf("%lld\t",emp[i].empNo);
	  printf("%d\t",emp[i].empSal);
	}
	return ;
}
