#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,sum=0,k;
	printf("Armstrong number between 1 to 100 are/is:\n");
	for(n=1;n<=100;n++)
	{
		k=0;
		k=n;
	while(n>0)
	{
		m=n%10;
		sum=sum+(m*m*m); 
		n=n/10;
		
	if(sum==k)
	printf("%d",k);
}
}	
	return 0;
	getch();
}
