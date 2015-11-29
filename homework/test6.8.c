#include<stdio.h>
#include<math.h>
int main()
{
	int j,t;
	double i,sum;
	j = 0;
	for (i=1;;i+=2){
		if ((1/i)<0.0001) break;
		j++;
		t = pow(-1,j+1);
		sum += t*(1.0/i);
	}
	printf("Pi = %lf t = %d",sum*4,j);
	return 0;
}