#include <stdio.h>

int main()
{
	char alphabets[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char *ptr;
	int i;
	ptr = alphabets;
	for(i=0;i<sizeof(alphabets);i++)
	{
		printf("%c ",*(ptr+i));
	}
	printf("\r\nOr\r\n");
	ptr = "A";
	for(i=0;i<26;i++)
	{
		printf("%c ",*ptr+i);
	}
	return 0;
}