#include<stdio.h>
char trnasf(int a)
{
	char t; 
	switch(a)
	{
		default: 
			t = (char)(a+'0');
			break;
		case 10:
			t = 'A';
			break;
		case 11: 
			t = 'B';
			break;
		case 12:
			t = 'C';
			break;	
		case 13: 
			t = 'D';
			break;
		case 14: 
			t = 'E';
			break;
		case 15: 
			t = 'F';
			break;		
	}
	return t;
}


int main()
{
	int n,m,i,mod;
	char a[100]={0};
	scanf("%d%d",&n,&m);
	for (i=0;n!=0;i++)
	{
		mod = n%m;
		a[i] = trnasf(mod);
		n = n/m;
	}
	for (i=i-1;i+1>0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}