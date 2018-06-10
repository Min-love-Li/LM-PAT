#include<stdio.h>
int main()
{
    int a[10]={0},i,j;
    char n;
    for(j=0;n != '\n';j++)
    {
        scanf("%c",&n);
        for(i=0;i<10;i++)
        {
            if(i == n-48)
            {
                a[i]++;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        if(a[i] != 0)
        printf("%d:%d\n",i,a[i]);
    }
    return 0;
}
