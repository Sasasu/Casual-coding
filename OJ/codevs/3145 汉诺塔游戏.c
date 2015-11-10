#include<stdio.h>
void move(int n,char a,char b,char c)
{
	if(n==1)
		printf("%d from %c to %c\n",n,a,c);
	else
	{
		move(n-1,a,c,b);
		printf("%d from %c to %c\n",n,a,c);
		move(n-1,b,a,c);
	}
}
int main()
{
	int ab[]={0,2,4,8,16,32,64,128,256,512,1024,2048};
	int n;
	scanf("%d",&n);
	printf("%d\n", ab[n] - 1);
	move(n,'A','B','C');
	return 0;
}