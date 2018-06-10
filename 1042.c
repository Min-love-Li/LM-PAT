#include<stdio.h>
int main()
{
    char n,m;
    int i,max,a[26]={0};
    m='0',max=0;
    do
    {
        scanf("%c",&n);
        if((n>='a')&& (n<='z'))
        {
            a[n-97]++;
        }
        if((n>='A')&& (n<='Z'))
        {
            a[n-65]++;
        }
    }while(n!='\n');
    for(i=0;i<26;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            m=i+97;
        }
    }
    printf("%c %d",m,max);
    return 0;
}
