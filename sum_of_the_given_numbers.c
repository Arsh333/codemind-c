#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],a,b,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("%d
",sum);
    }
}