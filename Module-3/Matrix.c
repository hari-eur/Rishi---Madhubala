#include<stdio.h>
int main()
{
	int r;
	int a[100][100];
	int key;
	printf("Enter the rows and columns:");
	scanf("%d",&r);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\nBefore Modification:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the value of key:");
	scanf("%d",&key);
	printf("\nAfter Modification:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			if(a[i][j]==key)
			{
				printf("%d ",a[i-1][j]);
			}
			else
			{
			printf("%d ",a[i][j]);	
			}	
		}
		printf("\n");
	}
	return 0;
}
