/* if_esle_endif.c */
#include <stdio.h>
#include <stdlib.h>
#define MIN 3
#define MAX 2
int main(void)
{
  int r;   
#if MIN > MAX
    #error "wrong definition"
#endif    
  system("pause");
  return 0;
}
