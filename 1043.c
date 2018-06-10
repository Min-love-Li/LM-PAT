#include<stdio.h>
int main()
{
    int a[10000],i,P,A,T,t,e,s;
    P=A=T=t=e=s=0;
    for(i=0;i<10000;i++)
    {
        scanf("%c",&a[i]);
        switch(a[i])
        {
            case 'P':
                P++;continue;
            case 'A':
                A++;continue;
            case 'T':
                T++;continue;
            case 't':
                t++;continue;
            case 'e':
                e++;continue;
            case 's':
                s++;continue;
        }
    }
    while(P||A||T||t||e||s)
    {
       if(P)
       {
           printf("P");
           P--;
       }
       if(A)
       {
           printf("A");
           A--;
       }
       if(T)
       {
           printf("T");
           T--;
       }
       if(t)
       {
           printf("t");
           t--;
       }
       if(e)
       {
           printf("e");
           e--;
       }
       if(s)
       {
           printf("s");
           s--;
       }
       if(t)
       {
           printf("t");
           t--;
       }
    }
    return 0;
}
