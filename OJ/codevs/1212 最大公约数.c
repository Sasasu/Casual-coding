#include<stdio.h>
int main()
{
	int a,b,t,i,m;
	t = 1;
	scanf("%d%d",&a,&b);
	(a<b)?(m = a):(m = b);
	for (i=1;i<=m;i++)
	{
		if ((a%i==0)&(b%i==0))
			if (i>t)
				t = i;
	}
	printf("%d",t);
	return 0;
}