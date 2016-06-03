/* 字元取代程式 */
#include <stdio.h>
#include<stdlib.h>
void sub(char*,char,char);
int main(void)
{
  char a,b,s[ ] = "This is fun!";
  puts(s);
  scanf("%c %c",&a,&b);
  sub(s,a,b);
  puts(s);  
  system("pause");
  return 0;
}
void sub(char *s,char a,char b)
{
  while(*s != '\0') {
    if(*s == a)              /* 找到欲取代的字元了 */
      *s = b;               /* 改變字元 */
    s++;
  }          
}
