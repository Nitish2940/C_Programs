#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0,i,sum1=0;
	printf("Enter the number.\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i%2==0)
    sum=sum+i;
    else
    sum1=sum1+i;
	}
	printf("Sum of all even numbers upto %d is=%d\n",n,sum);
printf("Sum of all odd numbers upto %d is=%d\n",n,sum1);
return 0;
getch();
}

