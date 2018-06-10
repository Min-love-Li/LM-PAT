#include<stdio.h>
#include <math.h>
int main()
{
    int n,i,x,y;
    float z,max;
    max=0,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        z=(x*x+y*y);
        z=sqrt(z);
        if(max < z)
            max=z;

    }
    printf("%.2f",max);
    return 0;
}
