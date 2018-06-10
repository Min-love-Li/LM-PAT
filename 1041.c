#include<stdio.h>
int main()
{
    int N,M,i,j,k,n[1000],m[1000],b[1000];
    char a[1000][16];
    scanf("%d%*c",&N);
    for(i=0;i<N;i++)
    {
        for(j=0;j<14;j++)
        {
            scanf("%c",&a[i][j]);
            a[i][14]='\0';
        }

        scanf("%d%d%*c",&n[i],&m[i]);
    }
    scanf("%d",&M);
    for(i=0;i<M;i++)
    {
        scanf("%d%*c",&b[i]);
        for(j=0;j<N;j++)
        {
           if(b[i] == n[j])
            {
               for(k=0;k<14;k++)
               {
                    printf("%c",a[j][k]);
               }
               printf(" %d\n",m[j]);
            }
        }
    }
    return 0;
}
