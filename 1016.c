#include<stdio.h>
int main()
{
    char a[11],b[11];
    int n,m,i,sum1,sum2;
    sum1=sum2=0;
    for(i=0;a[i-1]!=' ';i++)
    {
        scanf("%c",&a[i]);
    }
    a[i]='\0';
    scanf("%d%*c",&n);
    for(i=0;b[i-1]!=' ';i++)
    {
        scanf("%c",&b[i]);
    }
    b[i]='\0';
    scanf("%d%*c",&m);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i] == n+48)
            sum1=sum1*10+n;
    }
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i] == m+48)
            sum2=sum2*10+m;
    }
    printf("%d",sum1+sum2);
    return 0;
}
