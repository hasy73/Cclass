/* 五科成績算總分與平均分數程式 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int chinese,english,math,science,social;
    printf("請輸入五科成績：");
    scanf("%d %d %d %d %d",&chinese,&english,&math,&science,&social);      
    printf("總分為：%d\n",chinese+english+math+science+social);
    printf("平均為：%f\n",(float)(chinese+english+math+science+social)/5);
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
    return 0;
} 
