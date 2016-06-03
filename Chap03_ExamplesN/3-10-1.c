#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int chinese,english,math;
    float average;    //宣告average為浮點數變數
    printf("請輸入國文英文數學成績：");
    scanf("%d %d %d",&chinese,&english,&math);  //讀入各科成績
    average = (float)(chinese+english+math)/3;    //將分數加總後除以3
    printf("平均分數為：%f\n",average);
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
    return 0;
}
