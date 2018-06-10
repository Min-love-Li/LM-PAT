#include<stdio.h>
int main()
{
    int i,num;
    char a[80][80];
    num=0;
    while(a[num] !='\n' )
    {
        scanf("%s",a[num]);
        num++;
    }
    for(i=num-1;i>=0;i--)
    {
        printf("%s",a[i]);
        if(i>0)
        {
            printf(" ");
        }
    }
    return 0;
}
