/* strcat( ) strncat( ) �d�� */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
  char s1[] = "Hello ";
  char s2[10];
  printf("What's your name?");
  gets(s2);
  strncat(s1,s2,10);  //�N s2�s����s1����A��s2����10�Ӧr��
  printf("%s\n",s1);
  system("pause");
}
