#include<stdio.h>
main()
{
	char ch;
	
	printf("enter character = ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("%c",ch);
	}
	else
	{
		printf("%c",ch+32);
	}
}