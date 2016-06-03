/*閏年判斷程式 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int year;
    scanf("%d",&year);
    if(!(year%4)) {                      /*可被4整除*/
      if(!(year%100) && year%400)       /*被4和100都整除，但不被400整除*/
        printf("%d 年不為閏年\n",year);   
      else 
        printf("%d 年為閏年\n",year);   /*被4和400都整除，但不被100整除*/
    } 
    else 
      printf("%d 年不為閏年\n",year);  /*無法被4整除*/
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
    return 0;
} 

