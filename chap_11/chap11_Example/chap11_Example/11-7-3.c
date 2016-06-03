/* 時鐘程式 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
  time_t t;
  struct tm *TIME;
  while(1) {
    time(&t);
    TIME = localtime(&t);
    printf("現在時間: %d:%d:%d\n" 
        ,TIME->tm_hour,TIME->tm_min,TIME->tm_sec);
    system("cls");
  } 
  return 0;
}
