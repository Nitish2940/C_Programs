#include<stdio.h>
#include<conio.h>
int main()
{
	int a[60],i,j,n,temp=0;
	printf("How many number you want to enter\n");
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
			if(a[i]>a[j])
    		{
    			temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
			}
		}
	}
		printf("Smallest number of the array is=%d\n",a[0]);
	
	printf("Greatest number of the array is=%d\n",a[n-1]);
}
