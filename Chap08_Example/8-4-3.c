/* 字串內容比較程式 */
#include <stdio.h>
#include<stdlib.h>
int Mystrcmp(char *,char *);  
int main(void)
{
  int result;
  char word1[ ] = "I like C"; //字串1 
  char word2[ ] = "This is fun";  //字串2 
  result = Mystrcmp(word1,word2);
  if(!result) 
    printf("word1 equal word2\n");
  else
    printf("word1 does not equal word2\n");
  system("pause");     //使程式暫停在執行畫面讓我們看到結果
}
int Mystrcmp(char *str1,char *str2)  
{
  int i;
  for(i=0;!(*(str1+i) == '\0' && *(str2+i) == '\0'); i++)
    if(*(str1+i) != *(str2+i)) return -1; 
  return 0;
}




