#include<stdio.h>
int main()
{
    int k,m,n,i,j;
    int a[100][4];
    m=0;
    n=0;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);

        }
        if(a[i][0]+a[i][2] == a[i][1] && a[i][1] != a[i][3])
        {
            n++;
        }
        if(a[i][0]+a[i][2] == a[i][3] && a[i][1] != a[i][3])
        {
            m++;
        }
    }
    printf("%d %d",m,n);
    return 0;
}
