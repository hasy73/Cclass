/* undef.c */
#include <stdio.h>
#include <stdlib.h>
#define CPU "Central Processing Unit"  
#define ASAP "As Soon As Possible"
#define FYI "For Your Information"  
int main(void)
{
  printf("CPU is short for %s\n\n",CPU);
  printf("ASAP is short for %s\n\n",ASAP); 
  printf("FYI is short for %s\n\n",FYI);
  #undef CPU
  #define CPU "Central Process Unit" 
  printf("CPU is short for %s\n\n",CPU);
  system("pause");
  return 0;
}
