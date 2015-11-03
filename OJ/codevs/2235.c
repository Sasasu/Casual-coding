#include <stdio.h>
int main()
{
	int a;
	float b;
	scanf("%d %f", &a, &b);
	a = (int)((a*0.1*b+5) / 10) * 10;
	printf("%d", a);
	return 0;
}
