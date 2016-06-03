/* 登入系統程式 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int find_user_num(char get[], char acc[][2][10]){
  int i;
  for(i=0; i<2; i++)
    if(!strcmp(acc[i][0], get))
      return i;
  return -1;
}
int main(void)
{
  char get[10];  
  char acc[][2][10] = { "root","kindly",
                  "jason","iam"};
  int user_num;
  do {
    printf("Login:");
    gets(get);
    user_num = find_user_num(get, acc);
    if(user_num != -1){
      printf("Password:");
      gets(get);
      if(!strcmp(get,acc[user_num][1])){
        printf("Welcome ~ %s\n", acc[user_num][0]);
        break;
      }
      else
        printf("Incorrect password\n");
    }
    else
      printf("Unknown username\n");   
  } while(1);                    
  system("pause");
  return 0;
}
