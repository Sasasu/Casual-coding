#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b,c,t;
	for (a=0;a<10;a++)
		for (b=0;b<10;b++)
			for (c=0;c<10;c++)
			{
				t = pow(a,3)+pow(b,3)+pow(c,3);
				if((t == (n = (a*100+b*10+c)))&&(n>=100)) printf("%d\n",n);
			}
	return 0;
}