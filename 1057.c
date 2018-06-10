#include<stdio.h>
int main()
{
    char a;
    int m,n,sum;
    sum=0,m=0,n=0;
    do
    {
        scanf("%c",&a);
        if(a>='a' && a<='z')
        {
            sum=sum+a-96;
        }
        if(a>='A'&&a<='Z')
        {
            sum=sum+a-64;
        }
    }while(a!='\n');
    while(sum!=0)
    {
        if(sum%2==0)
        {
            m++;
        }
        if(sum%2==1)
        {
            n++;
        }
        sum=sum/2;
    }
    printf("%d %d",m,n);
    return 0;
}
