#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=1,z,n,k=0;
	printf("Enter the number of terms upto which you want to print fibonacci series\n");
	scanf("%d",&n);
	printf("%d %d ", i, j);
	for(z=0;z<n-2;z++)
	{
		k=i+j;
		i=j;
		j=k;
		printf("%d ", k);
	}
	return 0;
	getch();
}
