#include<stdio.h>
#include<stdlib.h>
int main()
{
	//int *ptr=(int *)malloc(size*sizeof(int));
	int size;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	int *ptr=(int *)malloc(size*sizeof(int));
	int i=0;
	int sum=0;
	while(i<size)
	{
		scanf("%d",&ptr[i]);
		sum+=*(ptr+i);
		i++;
	}
	printf("The sum of the array elements is:%d\n",sum);
}
