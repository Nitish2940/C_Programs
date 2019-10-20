
#include<stdio.h>
#include<conio.h>
int main()
{

	int a,b,c,d,e,sum=0;double per;
	printf("Enter the marks of 5 subjects\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	per=sum/5;
	printf("Sum of 5 Subjects is=%d\n",sum);
	printf("Percentage  of 5 Subjects is=%lf\n",per);
	return 0;
	getch();
	
}
