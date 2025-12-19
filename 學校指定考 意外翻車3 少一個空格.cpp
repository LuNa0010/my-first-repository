#include<stdio.h>
#include<math.h>

int main(void)
{   int a;
    scanf("%d",&a);
    printf("N=%d\n",a);
    int totala=0;
    int output=0;
    if(a%2==0)
    {
    	for(int i=1;i<=a/2;i++)
    	{
    		totala++;
    		totala++;
    		output+=totala; 
			printf("%d\n",totala);
        }
        printf("%d\n",output);
    	
    }
    else if(a%2==1)
    {
    	int total=-1;
    	for(int j=-1;j<a/2;j++)
    	{
    		total++;
    		total++;
    		output+=total; 
		}
    	printf("%d",output);
    }
}
