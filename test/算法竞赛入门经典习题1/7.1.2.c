/*************************************************************************
	> File Name: 7.1.2.c
	> Author: 
	> Mail: 
	> Created Time: 2015年12月12日 星期六 02时23分17秒
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    long long  max = INT_MIN;
    int num[18];
    while(scanf("%d",&n)!=EOF){
        for (int i = 0;i<n;i++)
            scanf("%d",&num[i]);
        for(int i = 0;i<n;i++){
            if (max<num[i]) max = num[i];
            long long max1 = num[i];
            for(int j = i+1;j<n;j++){
                max1*=num[j];  
                if(max<max1) max = max1;
            }
        }
        printf("%lld\n",max);
        
    }
}
