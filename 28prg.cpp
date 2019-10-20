#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char ch[100],str[100],ch1[100];int i,j,k;
	printf("Enter the string\n");
	scanf("%s",&ch);
	printf("Enter the another string to concatenate\n");
	scanf("%s",&str);
	i=strlen(ch);
	printf("Length of %s is =%d\n",ch,i);
		printf("String after copying from original is=%s\n",strcpy(ch1,ch));
	printf("String after concatenation is=%s\n",strcat(ch,str));
	
	return 0;
	getch();
}
