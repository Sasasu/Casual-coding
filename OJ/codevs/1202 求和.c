#include <stdio.h>
int main()
{
	int	n, t, i;
	long int sum;
	n = 0;
	t = 0;
	sum = 0;
	i = 0;
	scanf("%d", &n);
	for (i; i < n; i++)
	{
		scanf("%d", &t);
		sum = sum + t;
	}
	printf("%d\n", sum);
	return 0;
}
