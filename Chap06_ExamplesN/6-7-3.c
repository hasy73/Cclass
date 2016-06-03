#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void game(int,int,int);
int main(void)
{
    int answer;
    int left=1,right=10000;
    srand(time(NULL));
    answer = rand( ) % 10000;
    while(1)
    {
        int guess;
        printf("目前範圍 %d ~ %d ,請猜:",left,right);
        scanf("%d",&guess);
        if(guess > right || guess < left) exit(1);
        if(guess == answer) break;
        else {
          if(guess > answer) right = guess;
          else left = guess;
        }     
    }
    printf("您猜對了 ~\n");
    system("pause");
}


