#include<stdio.h>
#include<ctype.h>
int main()
{
	char a;
	a = getchar();
	if (isblank(a))
		printf("%c is a space",a);
	else if (isdigit(a))
		printf("%c is a digital character",a);
	else if (islower(a))
		printf("%c is a lower case",a);
	else if (isupper(a))
		printf("%c is a supper case",a);
	else
		printf("%c is a other case",a);
	return 0;
}