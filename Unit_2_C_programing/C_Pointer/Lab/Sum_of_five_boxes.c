#include<stdio.h>

void(*ptr_func)(double *p,int n);
void Enter_the_weights(double *pr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("Enter the weight of the box num(%d): ",i+1);
		scanf("%lf",pr+i);
	}
}
void Print_the_weights(double* pr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("You entered the weight of the box num(%d): %.3lf\r\n",i+1,*(pr+i));
	}
}
double Sum_of_boxes(double* pr,int size)
{
	int i;
	double sum=0;
	for(i=0;i<size;i++)
	{
		sum += *(pr + i);
	}
	return sum;
}
int main()
{
	double Weights[5];
	double res;
	ptr_func = Enter_the_weights;
	ptr_func(Weights,sizeof(Weights)/8);
	ptr_func = Print_the_weights;
	ptr_func(Weights,sizeof(Weights)/8);
	res = Sum_of_boxes(Weights,sizeof(Weights)/8);
	printf("sum = %0.3lf",res);

	return 0;
}