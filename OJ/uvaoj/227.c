/*************************************************************************
	> File Name: 227.c
	> Author: 
	> Mail: 
	> Created Time: 2016年01月28日 星期四 20时12分43秒
 ************************************************************************/

#include<stdio.h>
#define change(a, b)                                                           \
  do {                                                                         \
    move = a;                                                                  \
    a = b;                                                                     \
    b = move;                                                                  \
  } while (0)
int main()
{
    char grid[26];
    char move,c;
    int i,j,t = 1,flag = 0,error = 0;
    while((grid[0] = getchar()) != 'Z'){
        for(i = 1;i<25;i++){
            grid[i] = getchar();
            if ((i+1)%5 == 0) getchar();
            if (grid[i] = ' ') flag = i;
        }
        grid[25] = '\0';
        while((c = getchar()) != 'O'){
            switch(c){
                case 'A': if (flag-5 >= 0) change(grid[i],grid[i-5]); else error = 1; break;
                case 'B': if (flag+5 < 26) change(grid[i],grid[i+5]); else error = 1; break;
                case 'L': if (flag%5 > 1) change(grid[i],grid[i-1]); else error = 1; break;
                case 'R': if (flag%5 < 5) change(grid[i],grid[i+1]); else error = 1; break;
                default : error = 1;
            }
        }
        printf("Puzzle #%d:\n",t);
        getchar();
        if (error){
            printf("This puzzle has no final configuration.\n");
            getchar();
        }
        else{
            for(i = 0;i<5;i++){
                for(j = 0;j<5;j++){
                    printf("%c ",grid[i*5+j]);
                }
                printf("\n");
            }
        }
        t++;
        getchar();
        
    }
    return 0;
}

