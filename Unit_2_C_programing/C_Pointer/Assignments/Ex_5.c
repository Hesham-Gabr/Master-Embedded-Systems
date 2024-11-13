#include<stdio.h>

struct Sdata 
{
	char e_name[50];
	int id;
};
int main()
{
	int i;
	struct Sdata x = {"Hesham",123};
	struct Sdata y = {"Hashem",456};
	struct Sdata *(*SPTR)[2];
	struct Sdata *arr[2];
	arr[0] = &x;
	arr[1] = &y;
	SPTR = &arr;
	for(i=0;i<2;i++)
	{
		printf("%s\t%d\r\n",(*SPTR)[i]->e_name,(*SPTR)[i]->id);
	}
	return 0;
}