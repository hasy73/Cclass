/* ��C�����p�� */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int line[3][3],i,j,ans=0;    //�N����ܼ�ans����ȳ]��0
    for(i=0;i<3;i++)
      for(j=0;j<3;j++) {
          printf("��J��C����%d��%d�C�������G",i+1,j+1);
          scanf("%d",&line[i][j]);
      }
/*�@��kans = line[0][0]*line[1][1]*line[2][2] + line[0][1]*line[1][2]*line[2][0] +
         line[0][2]*line[1][0]*line[2][1] - line[0][2]*line[1][1]*line[2][0] - 
         line[0][0]*line[1][2]*line[2][1] - line[0][1]*line[1][0]*line[2][2]; */ 
    for(i=0;i<3;i++) {
      ans = ans + line[0][i]*line[1][(i+1)%3]*line[2][(i+2)%3];
        - line[0][(i+2)%3]*line[1][(i+1)%3]*line[2][i];  
    }
    printf("Ans = %d\n",ans);
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
}
