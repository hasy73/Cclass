/*傳遞陣列進函式*/
#include <stdio.h>
#include<stdlib.h>
void func(int [ ]);                 //宣告函式func有一個引數是陣列
int main(void)
{
    int a[2]={3,6};
printf("a[0]=%d a[1]=%d\n",a[0],a[1]);  //印出陣列內容
    func(a);                     //用陣列a呼叫函式func
    printf("a[0]=%d a[1]=%d\n",a[0],a[1]);
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
}
void func(int a[ ])                 //交換a[0]與a[1]的值
{
   int temp;
   temp = a[0];
   a[0] = a[1];
   a[1] = temp;
}
