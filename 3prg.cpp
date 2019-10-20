#include<stdio.h>
#include<conio.h>
#define pi 3.14
int main()
{
	double area,r,cir;
	printf("Enter the radius of the circle\n");
	scanf("%lf",&r);
	area=pi*r*r;
	cir=2*pi*r;
	printf("Area of circle is=%lf\n",area);
	printf("Circumference of circle is=%lf\n",cir);
	return 0;
	getch();
	
}
