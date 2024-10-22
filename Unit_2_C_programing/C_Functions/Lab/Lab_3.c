/*
 * Finding_a_name.c
 *
 *  Created on: Dec 6, 2023
 *      Author: hesham
 * Finding a a name in set of names
 */

#include <stdio.h>
#include <string.h>

int find_name(char list[][14], int n, char nametf[]);

int main()
{
	char names[5][14] = {"Hesham", "Ali", "Mohsen", "Reda", "Khaled"};
	char name[14];
	puts("Enter your first name: ");
	fflush(stdin);
	fflush(stdout);
	fgets(name,14,stdin);
	if(find_name(names, 5, name) < 5)
	{
		printf("Hello %s.",name);
	}
	else
	{
		printf("Sorry but you are not in the list %s .",name);
	}
	return 0;
}

int find_name(char list[][14], int n, char nametf[])
{
	int i;
	for (i=0; i<n; i++)
	{

		if (stricmp(nametf,list[i]) == 0)
		{
			break;
		}
	}
	return i;
}
