#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[8];
    int count1=0,count2=0,count3=0,count4=0;
    printf("Enter the string:");
    scanf("%s",str);
    int i=0;
    while(i<8)
    {
        //scanf("%c",&str[i]);
        if(isupper(str[i]))
        {
            count1++;
        }
        else if(islower(str[i]))
        {
            count2++;
        }
        else if(isdigit(str[i]))
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
