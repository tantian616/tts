#include<stdio.h>
int main(void)
{
   int v,b,c,d;
   float sum,a;
   printf("enter sum:\n");
   scanf("%d,%d,%d,%d",&v,&b,&c,&d);
   sum=v+b+c+d;
   a=(sum/4.0*10)/10.0;
   printf("sum is %f,a is %0.1f\n ",sum,a);
   return 0;
}

