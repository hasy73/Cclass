/* Array_Addr_Val_2.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    char cname[10]="Kelly";
    int i;
    for(i=0;i<=10;i++){
        printf("cname+%d: %d",i,cname+i);
        printf("\n");
        }
    printf("\n");
    for(i=0;i<=10;i++){
        printf("&cname[%d]: %d",i,&cname[i]);
        printf("\n");
        }
    //Part 1: �H?����O��X cname�o�Ӱ}�C��������}
    //�йB�Ψ�ؤ��P������}�覡
    printf("\n");
    //Part 2: �H?����O��Xcname�o�Ӱ}�C�������� 
    for(i=0;i<=10;i++){
        printf("cname[%d]: %d",i,cname[i]);
        printf("\n");
        }
    system("pause");     
}
