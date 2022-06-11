#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n/2+1;i++)
    {
        if(i*i==n)
        {
            c=1;
            break;
            
        }
    }
    if(c==0)
    printf("False");
    else
    printf("True");
    
}