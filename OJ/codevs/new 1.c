#include<stdio.h>
int main()
{
	char a[100][100] = {0};
	int i=1;
	for (;scanf(%s,&a[i])!=1;i++)
    ;
	for (i;i>1;i--)
		printf("%s ",a[i]);
	printf("%s",a[1]);
	return 0;
}
