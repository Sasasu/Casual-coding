#include <stdio.h>
int main()
{
	float a, b;
	a = 0;
	b = 0;
	scanf("%f%f", &a, &b);
	a = ((int)(a * 100000000 + 0.5)) / 100000000.0;
	b = ((int)(b * 100000000 + 0.5)) / 100000000.0;
	if (a == b) printf("yes");
	else printf("no");
	return 0;
}