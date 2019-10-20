#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,k=0;
	printf("Enter the number to which you want to check.\n");
	scanf("%d",&n);
	     for(i=2;i<n;i++)
	{
		if(n%i==0)
		k++;
	}
		if(k>=1)
			printf("%d is not a Prime number\n",n);
			else
			printf("%d is a Prime number\n",n);
			
     return 0;
    getch();
   }

