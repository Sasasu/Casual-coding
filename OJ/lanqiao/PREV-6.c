/*************************************************************************
	> File Name: PREV-6.c
	> Author: 
	> Mail: 
	> Created Time: 2015年12月03日 星期四 08时51分46秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,a[1000],t=0;
    int n1,n2;
    scanf("%d",&n);
    while(scanf("%d",&a[t])!=EOF)
    {
        t++;
    }
    for (int i = 0;i<t;i++){
        for(int j = i;j<t;j++)
        {
            if (a[i]>a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i=0;i<t;i++)
    {
        if (a[i]==a[i+1]) n1 = a[i];
        if (a[i+1]==a[i]+2) n2 = a[i]+1;
    }
    printf("%d %d",n2,n1);
    return 0;
}
