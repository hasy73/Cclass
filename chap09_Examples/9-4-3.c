/* �^�媺�P�_�{�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int i,len;  
  char str[80];
  while(1) {
    gets(str);
    len = strlen(str);
    for(i=0;i<len/2;i++) {
      if(str[i] != str[len-i-1]) {
        printf("%s ���O�^��\n",str);
        break;         
      }
    }
    if(i>=len/2)
      printf("%s �O�^��\n",str);       
  }
  system("pause");
  return 0;
}
