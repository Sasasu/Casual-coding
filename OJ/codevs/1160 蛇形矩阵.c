#include<stdio.h>
int main()
{
	int a[100][100] = {0};
	int n,num,i,j,t,x,y;
	num = 2;
	t = 2;
	scanf("%d",&n);
	x = n/2+1;
	y = x;
	a[x][y] = 1;
	y++;
	//x++;
	
	while (num<(n*n))
	{
		for (j=0;j<t;x--)
		{
			a[x][y] = num;
			num++;
			j++;
		}
		y--;
		x++;
		for (j=0;j<t;y--)
		{
			a[x][y] = num;
			num++;
			j++;
		}
		x++;
		y++;
		for (j=0;j<t;x++)
		{
			a[x][y] = num;
			num++;
			j++;
		}
		x--;
		y++;
		for (j=0;j<t;y++)
		{
			a[x][y] = num;
			num++;
			j++;
		}
		t = t+2;
	}
	for (i=0;i<=10;i++)
	{
		for (j=0;j<=10;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}