#include<stdio.h>
int main()
{
   int N,M,i,j,sum;
   sum=0;
   scanf("%d%d",&N,&M);
   int a[N+2][M];
   for(i=0;i<N+2;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    for(i=2;i<N+2;i++,sum=0)
    {
        for (j=0;j<M;j++)
        {
           if(a[i][j]==a[1][j])
           {
                 sum+=a[0][j];
           }
        }
        printf("%d\n",sum);
    }
    return 0;
}
