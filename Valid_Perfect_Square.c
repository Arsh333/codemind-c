#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[100],m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        m=sqrt(a[i]);
        if(a[i]%m==0)
        printf("True
");
        else
        printf("False
");
        
    }
}