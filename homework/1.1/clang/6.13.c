//6.13
#include<stdio.h>
int main()
{
	int n,sum = 0;
	while(1)	
	{
		scanf("%d",&n);
		if (n==0) break;	//持续输入直到n=0
		if (n>0) sum+=n;	//当且仅当n为正数时相加
	}
	printf("%d",sum);
	return 0;
}