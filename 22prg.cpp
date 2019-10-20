#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],b[50],i,c[50],n;
    printf("How many numbers you want to enter\n");
    scanf("%d",&n);
    printf("Enter the elements of 1st array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the elements of 2nd array\n");
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
    	c[i]=a[i]+b[i];
	}
    printf("The sum of array 1st and 2nd is=\n");
    for(i=0;i<n;i++)
    printf("%d\n",c[i]);
return 0;
getch();
}

