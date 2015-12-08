#include<stido.h>
#include<math.h>
int main()
{	
	const float pi=atan(1.0)*4;
	float r;
	scanf("%f",&r);
	printf("V=%f\n",4/3.0*pi*r*r*r);
	printf("S=%f",4*pi*r*r);
	return 0;
}