//试验二
//完成任务1、3、4、5、6
#include<stdio.h>
#include<stdlib.h>

void text(int flag) //定义函数处理输出四种随机语句
{
    char right[4][30] = {{"Very good!"},{"Excellent!"},{"Keep up the good work!"},{"Nice work!"}};
    char wrong[4][30] = {{"No. Please try again."},{"Wrong. Try once more."},{"Don't give up!"},{"Not correct Keep trying."}};
	//用二维字符串数组存储四种语句
    int r =rand()%4;
    if (flag) printf("%s\n",right[r]);
    else printf("%s\n",wrong[r]);
}
// 定义函数处理随机四则运算并以double类型返回结果
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
    double a,b,t, ans1,ans2,rate = 0;//ans存储学生答案 ans1存储正确答案 
									//a b为随机产生的两个正整数 flag存储正确错误
    while (rate<0.75)
    {
        int flag = 0;
        t = 0;
        for (int i=0;i<10;i++)
        {
            a = rand()%10 + 1;
            b = rand()%10 + 1;
            ans1 = math(a,b);		//调用math函数、将结果赋值ans1
            printf("Please enter your answer \n");
            scanf("%lf",&ans2);
            if (ans1==ans2){
                flag = 1;
                t++;
            }
            text(flag);
        rate = t/10.0;
        }
		if (rate<0.75) printf("Sorry,your correct rate is %.0lf\%,try again\n",rate*100);
    }
    return 0;
}
