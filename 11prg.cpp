#include<stdio.h>
#include<conio.h>
int main()
{
	int a,n,b;
	printf("Enter the vale of a and b such that (a>b)\n");
	scanf("%d%d",&a,&b);
	printf("Enter 1 for addition\n");
	printf("Enter 2 for subtraction\n");
	printf("Enter 3 for multiplication\n");
	printf("Enter 4 for quotient\n");
	printf("Enter 5 for remainder\n");
	printf("Enter your choice\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Addition of %d and %d is=%d",a,b,(a+b));
			break;
			case 2:
				printf("Subtraction of %d and %d is=%d",a,b,(a-b));
			break;
				case 3:
				printf("Multiplication of %d and %d is=%d",a,b,(a*b));
			break;
				case 4:
				printf("Quotient  of %d and %d is=%d",a,b,(a/b));
			break;
				case 5:
				printf("Remainder of %d and %d is=%d",a,b,(a%b));
			break;
			default:
				printf("Wrong choice\n");
			
	}
	return 0;
	getch();
	
	
}
