##include<stdio.h>

int main()
{
	int elem[15];
	int i,size;
	int *ptr;
	ptr = elem;
	printf("Enter the number of elements to stor in the array (max 15): ");
	scanf("%d",&size);
	printf("Enter %d number of elements in the array:\r\n",size);
	for (i=0;i<size;i++)
	{
		printf("Element->%d: ",i+1);
		scanf("%d",ptr+i);
	}
	printf("The elements of array in reverse order are: \r\n");
	for (i=size;i>=1;i--)
	{
		printf("Element-> %d: %d\r\n",i,*(ptr+i-1));

	}
	return 0;
}