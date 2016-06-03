/*季節名稱翻譯程式*/
#include <stdlib.h>
#include <string.h>
#define SPRING "春天"
#define SUMMER "夏天"
#define AUTUMN "秋天"
#define WINTER "冬天"
int main(void)
{
  char str[80];
  scanf("%s",str);  
#ifdef SPRING
  if(!strcmp(str,"spring"))    
    printf("spring is %s\n",SPRING);
#endif
#ifdef SUMMER
  if(!strcmp(str,"summer"))    
    printf("summer is %s\n",SUMMER);
#endif    
#ifdef AUTUMN
  if(!strcmp(str,"autumn"))    
    printf("autumn is %s\n",AUTUMN);
#endif    
#ifdef WINTER
  if(!strcmp(str,"winter"))    
    printf("winter is %s\n",WINTER);
#endif        
  system("pause");
  return 0;
}
