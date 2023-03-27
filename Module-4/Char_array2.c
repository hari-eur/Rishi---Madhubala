#include<stdio.h>
int main()
{
    char str[8];
    int count1=0,count2=0,count3=0,count4=0;
    printf("Enter the string:");
    scanf("%s",str);
    int i=0;
    while(i<8)
    {
        if((str[i])>='A'&& str[i]<='Z')
        {
            count1++;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            count2++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            count3++;
        }
        else
        {
            count4++;
        }
        i++;
    }
    if(count1&&count2&&count3&&count4)
    {
        printf("Password is correct!!");
    }
    else
    {
        printf("Please try with other password");
    }
}
