#include<stdio.h>
int main()
{
    int i,g,s,k,G[2],S[2],K[2];
    i=1;
    scanf("%d%*c%d%*c%d %d%*c%d%*c%d",&G[0],&S[0],&K[0],&G[1],&S[1],&K[1]);
    g=G[1]-G[0];
    s=S[1]-S[0];
    k=K[1]-K[0];
    if(g<0)
    {
        i=-1;
        g=-g;
        s=-s;
        k=-k;
    }
    if(g>=0)
    {
        if(k<0)
        {
            k+=29;
            s--;
        }
        if(s<0)
        {
            s+=17;
            g--;
        }
    }
    if(i==1)
    {
        printf("%d.%d.%d",g,s,k);
    }
    if(i==-1)
    {
        printf("-%d.%d.%d",g,s,k);
    }
    return 0;
}
