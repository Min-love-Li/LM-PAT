#include<stdio.h>
int main()
{
    char A[2][6] = {{'P','A','T','e','s','t'},{0,0,0,0,0,0}};
    char alp;
    int i;
    int flag = 0;
    alp = getchar();
    while(alp != '\n')
    {
        for(i = 0;i<6;i++)
        {
            if(alp == A[0][i])
            A[1][i]++;
        }
        flag++;
        alp = getchar();
    }
    while(flag)
    {
        for(i=0;i<6;i++)
        {
            if(A[1][i] != 0)
            {
                 putchar(A[0][i]);
            A[1][i]--;
            }
        }
        flag--;
    }
    return 0;
}
