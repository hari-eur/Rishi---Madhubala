#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string:");
	scanf("%s",str);
	char *ptr=str;
	int len=strlen(str);
	int i=0;
	while(*(ptr+i)!='\0')
	{
		printf("%c\n",*(ptr+i));
		i++;
	}
	return 0;
}
