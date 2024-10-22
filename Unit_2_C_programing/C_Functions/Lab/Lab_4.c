//printing numers

#include <stdio.h>

void fun_fun(int num);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fun_fun(n);
    return 0;
}

void fun_fun(int num)
{
    int i,j;
    for (i=0;i<=num;i++)
    {
        for(j=i;j<=num;j++)
        {
            printf("%d ",j);
        }
        printf("\r\n");
    }

}