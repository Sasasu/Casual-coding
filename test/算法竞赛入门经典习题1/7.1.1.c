/*************************************************************************
	> File Name: 7.1.1.c
	> Author: 
	> Mail: 
	> Created Time: 2015年12月12日 星期六 02时14分22秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    int n,b = 0;
    int num[10];
    scanf("%d",&n);
    for (num[5] = 0;num[5]<10;num[5]++)
    for (num[6] = 0;num[6]<10;num[6]++)
    for (num[7] = 0;num[7]<10;num[7]++)
    for (num[8] = 0;num[8]<10;num[8]++)
    for (num[9] = 0;num[9]<10;num[9]++){
        for(int i=0;i<5;i++){
            int f = 1;
            b +=num[9-i]*f;
            f *=10;
        }
    }
    printf("%d",b);
    return 0;
}
