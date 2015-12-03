/*************************************************************************
	> File Name: test6-ex1.c
	> Author: 
	> Mail: 
	> Created Time: 2015年12月02日 星期三 16时35分30秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{

    double a, sum;
    for (int i =1;i<=64;i++)
    {
        a =(double)pow(2,i);
        sum += a/1.42e8;
    }
    printf("%lf",sum);
    return 0;
}
