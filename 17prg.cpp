#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,sum=0;
	printf("Enter number. \n");
	scanf("%d",&n);
	while(n!=0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	printf("Sum of digits of entered number  is =%d\n",sum);
	return 0;
	getch();
}
