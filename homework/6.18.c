/*************************************************************************
	> File Name: 6.18.c
	> Author: 
	> Mail: 
	> Created Time: 2015年12月02日 星期三 22时16分52秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i;
    for (i = 1;i<10;i++)
        printf("%d\t",i);
    printf("\n");
    for (i = 1;i<10;i++)
        printf("-\t");
    printf("\n");
    for (i = 1;i<10;i++)
    {    
        for (int j=1;j<i;j++)
            printf("\t");   
        for(int j=i;j<10;j++)
            printf("%d\t",i*j);
        printf("\n");
    }
    return 0;
}
