#include<stdio.h>
int main()
{
    int i,n=0;
    char c[100][10000];
    for( ;scanf("%s",c[n])==1;n++)
       ;

    for(i=n-1;i>=0;i--)
       {
           printf("%s",c[i]);
           if(i!=0)
           printf(" ");
       }
         return 0;
}