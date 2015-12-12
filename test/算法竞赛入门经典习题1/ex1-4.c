/*************************************************************************
	> File Name: ex1-4.c
	> Author: 
	> Mail: 
	> Created Time: 2015年12月12日 星期六 01时37分48秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,b,n,m;
    scanf("%d%d",&n,&m);
    a = (4*n-m)/2;
    b = n-a;
/*    if ((a>=0&&a%1==0)&&(b>=0&&b%1==0)) 
        printf("%d %d",a,b);
    else printf("No answer"); 
*/
    if (m%2 == 1 ||a<0 || b<0)
        printf("No answer");
    else 
        printf("%d %d",a,b); //判断m偶数 a b大于0;
    
    return 0;
}

