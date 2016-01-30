#include<stdio.h>
int main()
{
	float mo,fa,height;
	char sex,sports,diet;
	int a,b;
	a=0;
	b=0;
	printf("F or M?");
	scanf("%c",&sex);
	printf("father and mother's height");
	scanf("%f%f",&mo,&fa);
	getchar();
	printf("sports?");
	scanf("%c",&sports);
	if (sports=='Y')
		a = 1;
	printf("diet ?");
	scanf("%c",&diet);
	if (diet=='Y')
		b = 1;
	if (sex=='F')
		height=(fa+mo)*0.54*(1+a*0.02)*(1+b*0.015);
	else 
		height=(fa*0.923+mo)/2*(1+a*0.02)*(1+b*0.015);
	printf("%f",height);
	return 0;
}
