/* StringCopy.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
  char s1[]="Money does't grow on trees.\n";
  char s2[]="Money does't come easily.";
  strcpy(s1,s2);
  printf("%s\n",s1);
  system("pause");
}
