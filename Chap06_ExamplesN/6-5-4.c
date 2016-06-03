#include <stdio.h>
#include <stdlib.h>
int f(int);               //計算費氏數列
int main(void)
{
    int n;
    printf("Input n:");
    scanf("%d",&n);
    printf("f(%d) = %d\n",n,f(n));
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
}
int f(int n)
{
  int i,sum,pre,fi;
  pre = 0;
  fi = 1;
  for(i=1;i<n;i++) {
      sum = pre + fi;  //加出下一項
      pre = fi;        //紀錄前一項
      fi = sum;       //第i項
   }
   return fi;
}

