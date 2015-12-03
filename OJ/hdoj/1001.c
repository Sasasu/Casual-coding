/*************************************************************************
	> File Name: 1001.c
	> Author: 
	> Mail: 
	> Created Time: 2015年12月02日 星期三 14时44分12秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,sum;
    while (scanf("%d",&a)!=EOF)
    {
        sum = 0;
        for (int i = 1;i<=a;i++)
         sum +=i;
        printf("%d\n\n",sum);
    }
    return 0;
}
