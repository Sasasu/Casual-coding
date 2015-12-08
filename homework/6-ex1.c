//第六章试验1

#include<stdio.h>
#include<math.h>
int main()
{

    double a, sum;		
    for (int i =1;i<=64;i++)
    {
        a =(double)pow(2,i);	//每个格子为2的n次方个麦子
        sum += a/1.42e8;		//每个格子先除1.42e8后再相加
    }
    printf("%lf",sum);
    return 0;
}
