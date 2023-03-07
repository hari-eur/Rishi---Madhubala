#include<stdio.h> 
void pyramid(int n);
void inverted_pyramid(int n);
void half_pyramid(int n);
int main()
{
	int n;
	printf("Enter the number of rows to be printed:");
	scanf("%d",&n);
	pyramid(n);
	inverted_pyramid(n);
	half_pyramid(n);
	return 0;
}
void pyramid(int n)
{
	int i=0;
	while(i<=n)
	{		
		for(int j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(int k=0;k<i;k++)
		{
			printf("* ");
		}
		printf("\n");
		i++;
	}
	printf("\n");
	
}

void inverted_pyramid(int n)
{
	int i=0;
	while(i<=n)
	{		
		for(int j=n-i;j<n;j++)
		{
			printf(" ");
		}
			for(int k=0;k<n-i;k++)
		{
			printf("* ");
		}
		printf("\n");
		i++;
	}
	printf("\n");
	
}
void half_pyramid(int n)
{
	int i=0;
	while(i<n)
	{		
		for(int k=0;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
		i++;
	}
	printf("\n");
	
}
