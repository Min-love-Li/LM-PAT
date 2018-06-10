#include<stdio.h>
int main()
{
    int i,n,j,m,temp,a[36]={0};
    m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        a[i]+=(a[i]%10)/10;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        if(a[i]!=a[i+1])
        {
            m++;
        }
    }
    printf("%d\n",m);
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
        {
            printf("%d%c",a[i],--m?' ':'\0');
        }
    }
    return 0;
}
