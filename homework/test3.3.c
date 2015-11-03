#include<stdio.h>
int main()
{
	const float rate=0.225;
	float money,n;
	int i;
	scanf("%f%f",&n,&money);
	for(i=0;i++;i<n)
	money=money+money*rate;
	printf("%f\n",money);
	return 0;
}
