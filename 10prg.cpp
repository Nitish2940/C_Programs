#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,sum=0;double per;
	printf("Enter the marks of 5 subjects\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	per=sum/5;
	printf("Your percentage is=%lf\n",per);
	if(per>=90&&per<=100)
	printf("Grade =A\n");
else	if(per>=80&&per<=89)
	printf("Grade =B\n");
else	if(per>=70&&per<=79)
	printf("Grade =C\n");
else 
	printf("Grade =D\n");
	return 0;
	getch();
	
}
