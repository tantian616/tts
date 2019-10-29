#include<stdio.h>
int main (void)
{
    int x=256;
    printf("entre x:\n");
    scanf("%d,&x");
    printf("x is %d-%d-%d\n",x/100,x/10-x/100*10,x%10);
    return 0;
}