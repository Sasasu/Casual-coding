/*************************************************************************
	> File Name: 5.1.3.c
	> Author: 
	> Mail: 
	> Created Time: 2015年12月02日 星期三 10时49分23秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[80];
    scanf("%s",a);
    int len = strlen(a);
    for (int i = 1;i<=len;i++)
    if (len % i ==0)
    {
        for (int j = i;ZZ j<len;j++)
        if (a[j]==a[j%i])
    }
}
