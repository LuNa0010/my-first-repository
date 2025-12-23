#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void acc()
{ 
    int a=1,sum=0;
    while(a<31)
    {
        sum+=100*100;
        a++;
    }
    printf("stranger give %d dallars to millionaire\n",sum);
    long double x=0.01;
    for(int i=0;i<30;i++)
    { 
      x*=2.0;
    }
    printf("millionaire give:%.0Lf dallars to stranger\n",x);
}
int main(void)
{
    acc();
    return 0;   
}
