#include<stdio.h>
int main()
{
    int a[10],i,sum;
    sum=0;
    scanf("%d",&a[0]);
    for(i=1;i<a[0]+1;i++)
    {
        scanf("%d",&a[i]);
        sum=a[i]+sum;
    }
    sum=sum*(a[0]-1)*10+sum*(a[0]-1);
    printf("%d",sum);
    return 0;
}
