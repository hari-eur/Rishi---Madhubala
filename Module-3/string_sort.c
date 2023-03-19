#include<stdio.h>
#include<string.h>
void sort(char c[])
{
	int k=strlen(c)-1;
	//printf("%d\n",k);
	char temp;
	int i=0;
	int flag=0;
	while(i<k)
	{
		for(int j=0;j<k;j++)
		{
			if(c[j]>c[j+1])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
		i++;
	}
	printf("-%s-",c);
}
int main()
{
	char inp[]="123434acibdf295869asdsd37695dfgasd";
	printf("%s\n",inp);
	int i=0,j=0,z=0;
	int key=0;
	int len=strlen(inp);
	char oup[len];
	
	
	
	//---------Alpha sort-----------------------
	while(j<len)
	{
	    i=0;
	    while((inp[j] >= 97 && inp[j] <= 122 ) | ( inp[j] >= 65 && inp[j] <= 90) && inp[j] != '\0')
	    {
	        oup[i]=inp[j];
	        oup[i+1]='\0';
		    i++;
		    ++j;
		    key=1;
		}
		if(key==1)
	    {
	        int m=strlen(oup);
	        sort(oup);
	        
	    }
	    i=0;
	    while((inp[j] >= 48 && inp[j] <= 57 ) && inp[j] != '\0')
	    {
	        oup[i]=inp[j];
	        oup[i+1]='\0';
		    i++;
		    ++j;
		    key=1;
	    }
	    if(key==1)
	    {
	        int m=strlen(oup);
	        sort(oup);
	        
	    }
	    
	}
	
	return 0;
}
