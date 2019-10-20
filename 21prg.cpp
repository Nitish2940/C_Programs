#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],i,n,sum=0;
	printf("How many numbers you want to enter .\n");
	scanf("%d",&n);
	printf("Enter the %d numbers\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	sum=sum+a[i];
    }
	printf("Sum of all numbers that you entered is=%d\n",sum);
   return 0;
    getch();
}

	

