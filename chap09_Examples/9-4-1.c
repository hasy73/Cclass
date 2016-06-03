/* 編碼程式 */
#include <stdio.h>
#include <stdlib.h>
char* encode(char*);
char* decode(char*);
int main(void)
{
  char ch,str[80];
  printf("請輸入字串:");
  gets(str);
  printf("您要 1)encode 2)decode :");
  scanf("%c",&ch);
  if(ch == '1') {
    puts("After encode : ");
    puts(encode(str));
  } else if (ch == '2') {
    puts("After decode :");
    puts(decode(str));
  } else
    puts("Unknown input");
  system("pause");
  return 0;
}

char* encode(char *str)
{
      char *r=str;
      while(*str) {
        *str = *str + 13;
        str++;
      }    
      return r;  
}
char* decode(char *str)
{
      char *r=str;
      while(*str) {
        *str = *str - 13;
        str++;
      }  
      return r;  
} 

