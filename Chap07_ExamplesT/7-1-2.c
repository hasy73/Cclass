/* 7-1-2.c */
#include <stdio.h>
#include<stdlib.h>
int S(int,int);
int main(void)
{
    int i,f[5],x,ans=0;
    for(i=0;i<5;i++) {
      printf("�п�J��{���� %d �������Y��",i);
      scanf("%d",&f[i]);
    }
    printf("�п�J���p�⪺�ܼƭ�");
    scanf("%d",&x);
    for(i=0;i<5;i++) {
      ans = ans + S(x,i) * f[i];
    }
    printf("f(%d) = %d\n",x,ans);
    system("pause"); 
}
int S(int x,int n)
{
    int i,tmp=x;
    if(n==0) return 1;
    for(i=1;i<n;i++)
      x = x*tmp;
    return x;  
}
