#include<stdio.h>
int main()
{
    int a[10],i,j,n;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        for(j=0;j<a[i] && a[i]!=0 && i!=0;j++)
        {
            printf("%d",i);
            if(a[0] != 0)
            {
                for(n=0;n<a[0];n++)

                {
                     printf("0");
                }
                a[0]=0;
            }
        }
    }
    return 0;
}
