#include<stdio.h>
#include<conio.h>
int main()
{
	int a[60],i,j,n,temp=0,o;
	printf("How many number  you want to enter\n");
	scanf("%d",&n);
	printf("Enter the %d elements of matrix\n",n);
	for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=(i+1);j<(n-1);j++)
		{
			if(a[i]>=a[j])
    		{
    			temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
			}
		}
	}
   printf("Number in ascending order are\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
