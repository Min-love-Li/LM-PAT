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
        score[a]+=c;//ͬһ������ɼ����ϵ���
        if(score[a]>max){//ÿһ���ҳ����ֵ
            max=score[a];
            temp=a;
        }
    }
    printf("%d %d",temp,max);
    return 0;
}
