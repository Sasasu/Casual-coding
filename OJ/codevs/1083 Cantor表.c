#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,t;
	i=1;
	j=1;
	t=1;
	scanf("%d",&n);
	while(n!=1)
	{
		if ((i==1)&&(j%2==1))
		{
			j++;
			t++;
			if (t==n)
				goto a;
		}
		if((j==1)&&(i%2==0))
		{
			i++;
			t++;
			if (t==n)
				goto a;
		}
		if ((i==1)&&(j%2==0))
		for(j;j>1;)
		{
			j--;
			i++;
			t++;
			if (t==n)
				goto a;
		}
		if ((j==1)&&(i%2==1))
		for (i;i>1;)
		{
			i--;
			j++;
			t++;
			if (t==n)
				goto a;
		}
	}
	a: ;
	printf("%d/%d",i,j);
	return 0;
}