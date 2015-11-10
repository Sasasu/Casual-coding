#include<stdio.h>
int main()
{
	int a[100]={0};
	int n,i,t;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		t = 0;
		scanf("%d",&a[i]);
		while(a[i] != 1)
		{
			if (a[i] == 1)
			{
				break;
			}
			if ((a[i]%2==1)&&(a[i]!=1))
			{
				t++;
				a[i] = 3*a[i]+1;
			}
			if (a[i]%2==0)
			{
				t++;
				a[i] = a[i]/2;
			}
		}
		printf("%d\n",t);
	}
	
	return 0;
}