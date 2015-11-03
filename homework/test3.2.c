#inclde<stdio.h>
#inclde<math.h>
int main()
{
	int num,a1,a2,a3;
	scanf("%d",&num);
	num = fabs(num);
	a1 = num/100;
	a2 = num/10%10;
	a3 = num%10;
	num = a3*100+a2*10+a1
	printf("%d\n",num);
	return 0;
}