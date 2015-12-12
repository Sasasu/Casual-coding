/*************************************************************************
	> File Name: 1003.c
	> Author: 
	> Mail: 
	> Created Time: 2015年12月02日 星期三 18时21分16秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for (int l = 0;l<t;l++)
    {
        int sum = 0,a[100000]={0},start = 0,end = 0;
        scanf("%d",&n);
        for(int i = 0;i<n;i++)
            scanf("%d",&a[i]);
        for (int i=0;i<n;i++){
            if (sum <a[i]) {sum = a[i];start = i;}
            int sum1 = a[i];
            for(int j = i+1;j<n;j++){
                sum1 += a[j];
                if (sum<sum1) {sum = sum1; end = j;}
            }
        }
        printf("Case %d:\n%d %d %d",l+1,sum,start+1,end+1);
        if (l+1!=t) printf("\n\n");
           
    }
}
