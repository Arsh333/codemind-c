#include<stdio.h>
int main()
{
    int n,rem,larg=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
    if(larg<rem)
    {
        larg=rem;
        
    }
    n=n/10;
    
    }
printf("%d",larg);
}