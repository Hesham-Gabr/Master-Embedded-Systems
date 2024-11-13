//Universal Add func

#include <stdio.h>

union res
{
	int resi;
	float resf;
};
union Number_1
{
	int num_1;
	float num_1f;
};
union Number_2
{
	int num_2;
	float num_2f;
};
union res Add_fun(void* v1,void* v2,int t);

int main()
{
	union Number_1 n1;
	union Number_2 n2;
	int num_type;
	union res sum;
	printf("Enter their type (0 if they arr int, 1 if they are float): ");
	scanf("%d",&num_type);
	printf("Enter the two number you want to add like this(x,y): ");
	if(num_type == 0)
	{	
		scanf("%d,%d",&n1.num_1,&n2.num_2);
		sum = Add_fun(&n1.num_1,&n2.num_2,num_type);
		printf("%d + %d = %d",n1.num_1,n2.num_2, sum.resi);
	}
	else
	{
		scanf("%f,%f",&n1.num_1f,&n2.num_2f);
		sum = Add_fun(&n1.num_1f,&n2.num_2f,num_type);
		printf("%.3f + %.3f = %.3f",n1.num_1f,n2.num_2f, sum.resf);
	}

	return 0;
}

union res Add_fun(void* v1,void* v2,int t)
{
	union res sum;
	if(t == 0)
	{
		sum.resi = *(int*)v1 + *(int*)v2;
		return sum;
	}
	else
	{
		sum.resf = *(float*)v1 + *(float*)v2;
		return sum;
	}
}