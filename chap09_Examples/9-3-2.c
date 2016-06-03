/* strchr( ) strrchr( ) ½d¨Ò */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
  char s [] = "string is fun!";
  char key;
  printf("The string is ¡ystring is fun!¡z. Which Character?");
  scanf("%c",&key);
  if(strchr(s,key))
    printf("Found %c in string! The address is %d.\n",key, strchr(s,key));
  else
    printf("Can't find %c in string!\n",key);
  system("pause");
}
