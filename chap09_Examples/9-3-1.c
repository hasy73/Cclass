/* strcat( ) strncat( ) 範例 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
  char s1[] = "Hello ";
  char s2[10];
  printf("What's your name?");
  gets(s2);
  strncat(s1,s2,10);  //將 s2連接到s1之後，取s2中的10個字元
  printf("%s\n",s1);
  system("pause");
}
