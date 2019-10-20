#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,sum=0;
	printf("Enter number. \n");
	scanf("%d",&n);
	printf("Number in original form is=%d\n",n);
	printf("Number in reversed form is=");
	while(n!=0)
	{
		m=n%10;
		printf("%d",m);
		n=n/10;
	}
	return 0;
	getch();
}
