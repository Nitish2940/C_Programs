#include<stdio.h>
#include<conio.h>
int main()
{
	int a,sum=0,i;
	printf("Enter the number to which you want to print the sum.\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	printf("Sum of numbers is=%d\n",sum);
	return 0;
	getch();
}
