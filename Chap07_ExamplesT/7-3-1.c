/* 行列式的計算 */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int line[3][3],i,j,ans=0;    //將整數變數ans的初值設為0
    for(i=0;i<3;i++)
      for(j=0;j<3;j++) {
          printf("輸入行列式第%d行%d列的元素：",i+1,j+1);
          scanf("%d",&line[i][j]);
      }
/*一般法ans = line[0][0]*line[1][1]*line[2][2] + line[0][1]*line[1][2]*line[2][0] +
         line[0][2]*line[1][0]*line[2][1] - line[0][2]*line[1][1]*line[2][0] - 
         line[0][0]*line[1][2]*line[2][1] - line[0][1]*line[1][0]*line[2][2]; */ 
    for(i=0;i<3;i++) {
      ans = ans + line[0][i]*line[1][(i+1)%3]*line[2][(i+2)%3];
        - line[0][(i+2)%3]*line[1][(i+1)%3]*line[2][i];  
    }
    printf("Ans = %d\n",ans);
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
}
