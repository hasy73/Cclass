#include <stdio.h>
#include <stdlib.h>
int f(int);               //�p��O��ƦC
int main(void)
{
    int n;
    printf("Input n:");
    scanf("%d",&n);
    printf("f(%d) = %d\n",n,f(n));
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
}
int f(int n)
{
  int i,sum,pre,fi;
  pre = 0;
  fi = 1;
  for(i=1;i<n;i++) {
      sum = pre + fi;  //�[�X�U�@��
      pre = fi;        //�����e�@��
      fi = sum;       //��i��
   }
   return fi;
}

