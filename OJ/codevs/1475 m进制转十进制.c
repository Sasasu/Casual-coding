#include<stdio.h>
#include<string.h>
int main()
{
	char a[100] = {0};
	int b[100] = {0};
	int n,i,j,t,q,sum;
	q = 1;
	sum =0;
	scanf("%s%d",&a,&n);
	i = strlen(a)-1;
	for (j=0;j<=i;j++)
	{
		if ((a[j]>='0')&&(a[j])<='9')
			b[j] = a[j]-'0';
		if ((a[j]>='A')&&(a[j])<='F')
			b[j] = a[j]-'A'+10;
		q = b[j];
		for (t = i-j ;t>0;t--)
			q*=n;
		sum = sum +q;
	}
	printf("%d",sum);
	return 0;
	
}