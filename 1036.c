#include<stdio.h>
int main()
{
    int n,m,i,j;
    char ch;
    scanf("%d %c",&n,&ch);
    m=n;
    if(n%2)
        n=n/2+1;
    else
        n=n/2;
    for(i=0;i<n;i++)
    {
        if(i==0||i==n-1)
        {
            for(j=0;j<m;j++)
                printf("%c",ch);
                printf("\n");
        }
        else
        {
            printf("%c",ch);
            for(j=1;j<m-1;j++)
            {
                printf(" ");
            }
            printf("%c\n",ch);
        }
    }
    return 0;
}
