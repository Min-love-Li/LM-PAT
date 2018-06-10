#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    c=n%10;
    b=(n/10)%10;
    a=n/100;
    for(i=0;i<a;i++)
        printf("B");
    for(i=0;i<b;i++)
        printf("S");
    for(i=1;i<c+1;i++)
        printf("%d",i);
    return 0;
}
