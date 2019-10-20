#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],i,j,r,c,sum=0;
	printf("Enter the number of rows of the matrix\n");
	scanf("%d",&r);
	printf("Enter the number of column elements of the matrix\n");
	scanf("%d",&c);
	printf(" Enter Elements of matrix are\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
			printf("Elements of matrix are\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
			printf("\n ");
		}
		for(i=0;i<r;i++)
		{
		for(j=0;j<c;j++)
		{
		if(i==j)
		sum=sum+a[i][j];
	}
}
	printf("Sum of diagonal is=%d\n",sum);
	
		return 0;
	getch();
}
	
