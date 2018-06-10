#include<stdio.h>
int main()
{
    int n,i;
    int a,b,c;
    scanf("%d",&n);
    int max=0,temp=0;
    int score[1005]={0};
    for(i=0;i<n;i++)
        {
        scanf("%d-%d %d",&a,&b,&c);
        score[a]+=c;//同一个队伍成绩不断叠加
        if(score[a]>max){//每一次找出最大值
            max=score[a];
            temp=a;
        }
    }
    printf("%d %d",temp,max);
    return 0;
}
