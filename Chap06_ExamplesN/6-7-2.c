#include <stdio.h>
#include <stdlib.h>
int C(int,int);               //�p��զX��
int main(void)
{
    int  n,r;
    printf("�p��զX��C, �п�Jn,r:");
    scanf("%d %d",&n,&r);
    printf("C(%d,%d) = %d",n,r,C(n,r));
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
}
int C(int n,int r)
{
    if(n < r || r<0 )  //n�����j��r�Ar�����j�󵥩�0
      return -1;
    if(n == r || r==0)     //���ۦP�ƥػP��0�ت���k���u���@��
      return 1;
    return C(n-1,r) + C(n-1,r-1); //�զX����
}

