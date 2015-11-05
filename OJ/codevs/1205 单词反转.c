#include<stdio.h>
int main()
{
	char a[100][100] = {0};
	int i;
	for (i=1;;i++)
	{
		scanf("%s",&a[i]);
		if(getchar()=='\n')
			break;
	}
	for (i;i>1;i--)
		printf("%s ",a[i]);
	printf("%s",a[1]);
	return 0;
}