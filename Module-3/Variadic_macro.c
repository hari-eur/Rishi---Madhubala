#include<stdio.h>
#define print(...) printf(__VA_ARGS__)
int main()
{
	char data[50];
	char data_1[50],data_2[50];
	scanf("%s",data);
	scanf("%s",data_1);
	scanf("%s",data_2);
	print("Welcome to %s\n",data);
	print("Hello to %s:\nWelcome to %s\n",data_1,data_2);
	
}
