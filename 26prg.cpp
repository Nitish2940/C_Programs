#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50][50],b[50][50],i,n,o,j,p[50][50],c[i][j];
    printf("How many order of matrix  you want to enter\n");
    scanf("%d",&o);
    n=o*o;
    printf("Enter %d elements of 1st array=\n",n);
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    scanf("%d",&a[i][j]);
}
}
     for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    scanf("%d",&b[i][j]);
}
}
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
p[i][j]=a[i][j]*b[i][j];
}
	}
    printf("The sum of matrix 1st and 2nd is=\n");
     for(i=0;i<n;i++)
     {
     	for(i=0;i<n;i++)
	 {
    printf("%d ",c[i][j]);
}
printf("");
}
    printf("The product of matrix 1st and 2nd is=\n");
     for(i=0;i<n;i++)
     {
     	for(i=0;i<n;i++)
	 {
    printf("%d ",p[i][j]);
}
printf("");
}
return 0;
getch();
}    

