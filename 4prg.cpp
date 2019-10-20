#include<stdio.h>
#include<conio.h>
int main()
{
	double f,cent;
	printf("Enter the temperature in centigrade\n");
	scanf("%lf",&cent);
	f=((cent*9)/5)+32;
	printf("Temperature in fahrenhiet is=%lf\n",f);
		return 0;
	getch();
	
}
