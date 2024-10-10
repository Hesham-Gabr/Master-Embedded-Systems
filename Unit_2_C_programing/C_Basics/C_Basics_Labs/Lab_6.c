/*0123456789
123456789
23456789
3456789
456789
56789
6789
789
89
9*/

#include<stdio.h>

void main()
{
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}