#include<stdio.h>
#include<strrev.h>
void main()
{
	int name,rev;
	printf("enter a string");
	scanf("%s",string);
	rev=strrev(name);
	if(strcmp(name,rev)==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}		
	getch();
}	
