/*條件式編譯程式*/
#include <stdio.h>
#include <stdlib.h>
#define RICE
//#define NOODLE
int main(void)
{
#ifdef RICE
  printf("I like rice the best!\n");
#endif
#ifdef NOODLE
  printf("I like noodle the best!\n");
#endif        
  system("pause");
  return 0;
}
