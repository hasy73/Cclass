/* CharArray_1.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char str1[6];
    char str2[]={'J','a','s','o','n','\0'};
    char str3[]="Jason";
    char str4[]={'J','a','s','o','n'};
    str1[0]='J';
    str1[1]='a';
    str1[2]='s';
    str1[3]='o';
    str1[4]='n';
    str1[5]='\0';
    printf("�r��str1���e��: %s\n", str1);
    printf("�r��str2���e��: %s\n", str2);
    printf("�r��str3���e��: %s\n", str3);
    printf("�r��str4���e��: %s\n", str4);
    system("pause");     
    return 0;
}
