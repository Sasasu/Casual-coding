//6.18
#include<stdio.h>
int main()
{
    int i;
    for (i = 1;i<10;i++)
        printf("%d\t",i); 
    printf("\n");
    for (i = 1;i<10;i++)
        printf("-\t");	//输出第一行数字和第二行分割线
    printf("\n");
    for (i = 1;i<10;i++)//第一重循环控制列号
    {    
        for (int j=1;j<i;j++)
            printf("\t");   	//前i个位置输出制表符
        for(int j=i;j<10;j++)
            printf("%d\t",i*j);	//后10-i个位置输出乘法表
        printf("\n");			//每一行输出换行符
    }
    return 0;
}
