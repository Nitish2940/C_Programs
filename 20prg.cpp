#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x1;int n,m,i,a[10],k=0,j=0,x;long int b;int sum=0,p1=1,y=0;
    printf("Enter 1 for Decimal to Binary\n");
	printf("Enter 2 for Binary to Decimal\n");
	printf("Now, Enter your choice\n");
	scanf("%d",&x1);
	switch(x1)
	{
		case 1:
				
	char ch[10];
	printf("Enter any number \n");
	scanf("%d",&n);
	if(n==0)
	{
	printf("The binary code is=%d\n",0);	
	}
	while(n!=0)
	{
		m=n%2;
		a[j]=m;
		n=n/2;
		k++;
		j++;
		}
		printf("The binary code is=");
		for(x=(k-1);x>=0;x--)
		printf("%d",a[x]);
	break;
				case 2:
						
	printf("Enter any number\n");
						
			scanf("%d",&b);
				printf("The number in decimal form is=");
						while(b>0)
						{
						    m=b%10;
						    a[y]=m;
						    	b=b/10;
							k++;
							y++;
						}
						for(i=0;i<=(k-1);i++)
						{
							p1=pow(2,i)*a[i];
							sum=sum+p1;
							}
						printf("%d",sum);
					break;
					default:
						printf("Wrong choice\n");
					}
					return 0;
					getch();
				}
					
