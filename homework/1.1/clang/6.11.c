#include<stdio.h>
int main()
{
	long  n,sum1,sum2;
	int m,t,j,i;
	scanf("%ld",&n);
	for (i=1;;i++){
		for (j=1;j<=i;j++){
			sum2 *= j;
		}
		sum1 += sum2;
		if (sum1<=n) printf("%d ",i);
		else break;
	}
	return 0;
}
