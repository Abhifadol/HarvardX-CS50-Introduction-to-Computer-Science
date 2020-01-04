#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void)
{
    float n;
    int coin=0;
    do
    {
        n=get_float("Change owed: ");
    }while(n<0);
    n=round(n*100);
    while(n>=25)
    {
        n=round(n-25);
        coin++;
    }
    while(n>=10)
    {
        n=round(n-10);
        coin++;
    }
    while(n>=5)
    {
        n=round(n-5);
        coin++;
    }
    while(n>=1)
    {
        n=round(n-1);
        coin++;
    }
    printf("%d\n",coin);

}
