#include<stdio.h>
int main()
{
    int n,i,j;
    char a[100][16];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<16;j++)
        {
            scanf("%c",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<16;j++)
        {
            if(a[i][j]=='T')
                printf("%c",a[i][j-2]-16);
        }
    }
    return 0;
}
