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
    printf("陌生人要給富豪:%d 元\n",sum);
    float x=0.01;
    for(int i=0;i<=29;i++)
    { 
      x=2.0*x;
    }
    printf("百萬富翁要給陌生人:%.0f\n 元",x);
}
int main(void)
{
    acc();
    return 0;   
}
