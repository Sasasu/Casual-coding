/*************************************************************************
	> File Name: 1003.c
	> Author: 
	> Mail: 
	> Created Time: 2015年12月02日 星期三 18时21分16秒
 ************************************************************************/

#include<stdio.h>
int man()
{
    int t,n,sum,a[100000]={0};
    scanf("%d",&t);
    for (int l = 0;l<t;l++);
    {
        scanf("%d",&n);
        for(int i = 0;i<n;i++)
            scanf("%d",a[i]);
        for (int i=0;i<n;i++){
            for(int j = i;j<n;j++){
                if (sum<(sum+a[j])) sum+=a[j];
            }
        }
           
    }
}
