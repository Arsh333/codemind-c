#include<stdio.h>
int main()
{
    int L,B,W,C,A1,A2,A,R;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    A1=L*B;
    A2=(L+2*W)*(B+2*W);
    A=A2-A1;
    R=A*C;
    printf("%d",R);
}