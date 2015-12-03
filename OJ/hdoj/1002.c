/*************************************************************************
	> File Name: 1002.c
	> Author: 
	> Mail: 
	> Created Time: 2015年12月02日 星期三 14时58分41秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void sum(char *a,char *b,char *c) 
{
    int i,j,k;
    int len1 = strlen(a);
    int len2 = strlen(b);
    k = (len1>len2)?len1:len2;
    memset(c,'0',k);
    c[k+1] = '\0';
    int temp,carry = 0;
    for (i = len1-1,j = len2-1;i>=0||j>=0;i--,j--,k--)
    {
        temp = carry;
        if (i>=0) temp += a[i]-'0';
        if (j>=0) temp += b[j]-'0';
        if (temp>=10) {
            c[k] = temp - 10 +'0';
            carry = 1;
        }else {
            c[k] = temp + '0';
            carry = 0;
        }
    }
    c[k] = carry + '0';
    if (c[0]=='0') {
        for (i = 0;c[i]!='\0';i++)
        c[i] = c[i+1];
        c[i-1] = '\0';
    }
}
int main()
{
    char a[1000],b[1000],c[1000];
    int n;
    scanf("%d",&n);
    for (int ii=1;ii<=n;ii++)
    {
        scanf("%s%s",a,b);
        sum(a,b,c);
        printf("Case %d:\n",ii);
        printf("%s + %s = %s\n",a,b,c);
        if (ii!=n) printf("\n");
    }   
    return 0;

}
