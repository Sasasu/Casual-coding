 #include<stdio.h>
int main()
{
	int a[100][100] = {0};
	int n,num,i,j,t,x,sum,y;
	sum = 0;
	num = 2;
	t = 2;
	scanf("%d",&n);
	x = n/2+1;
	y = x;
	a[x][y] = 1;
	y++;	
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
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	for (i=1;i<=n;i++)
	    sum +=a[i][i];
	for (j=1;j<=n;j++)
    {
         sum += a[i][j];
         i--;   
    }
	printf("%d",sum);	
	return 0;
}