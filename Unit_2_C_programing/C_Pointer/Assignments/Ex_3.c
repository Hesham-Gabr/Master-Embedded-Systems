#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	char *ptr;
	int i;
	printf("Input a string: ");
	scanf("%49s",str);
	ptr = str;
	printf("pointer:print a string in reverse order:\r\n----------------------\r\n");
	printf("The string: ");
	for(i=0;i<strlen(str);i++)
	{
		printf("%c",*(ptr+i));
	}
	printf("\r\nReverse of the string is : ");
	for(i=strlen(str)-1;i>=0;i--)
	{
		printf("%c",*(ptr+i));
	}
	return 0;
}