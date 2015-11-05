#include<stdio.h>
int main()
{
	int n,i,j,t,m;
	int a[100]={0};
	t = 0;
	m = 0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
			if ((a[i]==a[j])&&(i!=j))
			{
				a[i]=-1;
				t++;
			}
		}
	t = n-t;
	for (i=0;i<n;i++)
		for (j=i;j<n;j++)
		{
			if (a[i]>a[j])
			{
				m = a[i];
				a[i] = a[j];
				a[j] = m;
			}
		}
	printf("%d\n",t);
	for (i=0;i<n;i++)
	{
		if (a[i]!=-1)
		{
			printf("%d",a[i]);
			if (i!=n-1)
				printf(" ");
		}
		
		
	}
	return 0;
}