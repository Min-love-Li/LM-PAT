#include<stdio.h>
typedef struct student
{
    long ID;/*14λ׼��֤��*/
    int a;/*�Ի���λ��*/
    int b;/*������λ��*/
}STUDENT;
int main()
{
  int N,i,j;
  int M;
  int A[10000];
  scanf("%d",&N);
  STUDENT stu[N];
  for(i=0;i<N;i++)
  {
      scanf("%ld%d%d\n",&stu[i].ID,&stu[i].a,&stu[i].b);
  }
  scanf("%d",&M);
  for(i=0;i<M;i++)
  {
      scanf("%d",&A[i]);
      for(j=0;j<N;j++)
     {
         if(A[i]==stu[j].a)
         printf("%ld %d\n",stu[j].ID,stu[i].b);
     }
  }
  return 0;
}
