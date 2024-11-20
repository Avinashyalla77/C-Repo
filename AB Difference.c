#include<stdio.h>
int main()
{
    int a,b,m,d;
    scanf("%d%d",&a,&b);
    m=a*b;
    d=a+b;
    if(m>d)
    {
        printf("%d",m-d);
    }
    else 
    {
        printf("%d",d-m);
    }

}