/*************************************************************************
	> File Name: test6-ex2.c
	> Author: 
	> Mail: 
	> Created Time: 2015年12月02日 星期三 16时44分06秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

void text(int flag)
{
    char right[4][30] = {{"Very good!"},{"Excellent!"},{"Keep up the good work!"},{"Nice work!"}};
    char wrong[4][30] = {{"No. Please try again."},{"Wrong. Try once more."},{"Don't give up!"},{"Not correct Keep trying."}};
    int r =rand()%4;
    if (flag) printf("%s\n",right[r]);
    else printf("%s\n",wrong[r]);
}

double math(double n1,double n2)
{
    int r = rand()%4 + 1;
    switch(r)
    {
        case 1: printf("%.0lf+%.0lf = ?\n",n1,n2);return n1+n2;break;
        case 2: printf("%.0lf-%.0lf = ?\n",n1,n2);return n1-n2;break;
        case 3: printf("%.0lf/%.0lf = ?\n",n1,n2);return n1/n2;break;
        case 4: printf("%.0lf*%.0lf = ?\n",n1,n2);return n1*n2;break;
    }
}

int main()
{
    double a,b,t, ans1,ans2,rate = 0;
    while (rate<0.75)
    {
        int flag = 0;
        system("cls");
        t = 0;
        for (int i=0;i<10;i++)
        {
            a = rand()%10 + 1;
            b = rand()%10 + 1;
            ans1 = math(a,b);
            printf("Please enter your answer \n");
            scanf("%lf",&ans2);
            if (ans1==ans2){
                flag = 1;
                t++;
            }
            text(flag);
        rate = t/10.0;
        }
    }
    return 0;
}
