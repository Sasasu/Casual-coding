#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,flag;
	flag = 0;
	scanf("%d",&n);
	for (i=2;i<=sqrt(n);i++)
	{
		if (n%i==0)
		{
			flag = 1;
			break;
		}
	}
	(flag==1)?printf("\\n"):printf("\\t");
	return 0;
}