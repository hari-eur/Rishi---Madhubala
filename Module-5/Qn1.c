#include<stdio.h>
#include<string.h>
int main()
{
    struct dept
    {
        struct student_details
        {
            char name[30];
            char mail[30];
            long long int mobile;
            float per;
        }stu;
        char dept[30];
    }dep[20];
    int s;
    printf("Enter the number of inputs:");
    scanf("%d",&s);
    for(int i=0;i<s;i++)
    {
        printf("Student name:");
        scanf("%s",dep[i].stu.name);
        printf("Mail id:");
        scanf("%s",dep[i].stu.mail);
        printf("Mobile no:");
        scanf("%lld",&dep[i].stu.mobile);
         printf("Percentage:");
         scanf("%f",&dep[i].stu.per);
        printf("Department name:");
        scanf("%s",dep[i].dept);
        printf("---------------------------------------\n");
    }
    float sum1=0,sum2=0,sum3=0,sum4=0;
    int i1=0,i2=0,i3=0,i4=0;
    int bool;
    float avg=0;
    for(int i=0;i<s;i++)
    {
       if(!(strcmp(dep[i].dept,"EEE")))
       {
           sum1+=dep[i].stu.per;
           i1++;
           
       }
       else if(!(strcmp(dep[i].dept,"CSE")))
       {
           sum2+=dep[i].stu.per;
           i2++;
       }
        else if(!(strcmp(dep[i].dept,"IT")))
       {
           sum3+=dep[i].stu.per;
           i3++;
           
       }
       else if(!(strcmp(dep[i].dept,"ECE")))
       {
           sum4+=dep[i].stu.per;
           i4++;
       }
        
    }
    if(i1!=0)
    {
       printf("EEE=%f\n",sum1/i1); 
    }
    if(i2!=0)
    {
        printf("CSE=%f\n",sum2/i2);
    }
    if(i3!=0)
    {
        printf("IT=%f\n",sum3/i3);  
    }
    if(i4!=0)
    {
        printf("ECE=%f\n",sum4/i4);
    }
}
