#include <stdio.h>
int main()
{
    int t, max,min;
	int n, i;
	i = 0;
	max = -2147483647;
	min = 2147483647;
	scanf("%d", &n);
	for (i; i <= n; i++)
	{
		scanf("%d", &t);
		if (max < t) max = t;
		if (min > t) min = t;
	}
	printf("%d %d\n", min, max);
	return 0;
}