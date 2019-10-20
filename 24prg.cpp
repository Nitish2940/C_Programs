#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],i,n,s,k=0;
	printf("How many numbers you want to enter\n");
	scanf("%d",&n);
	printf("Enter the %d elements of the matrix\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the number to be searched\n");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)	
		k++;
	}
		if(k==1)
		printf("Number is present.\n");
		else
		printf("Number is not present.\n");
			return 0;
			getch();
		}
	
