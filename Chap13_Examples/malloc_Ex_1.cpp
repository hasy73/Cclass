#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *start;
    int *p;
    int i;
    int size;
    
    printf("�п�J��Ƶ���: ");
    scanf("%d", &size);
    //Step 1:�@�I�s malloc,�n�D�t�m size �Ӿ�ƨñN�Ǧ^�ȫ��w��p 
    p=(int*)malloc(size*sizeof(int));
    //Step 2 : �O�d�_�l��}    
    start=p;
    //Step 3: ��X�Ұt�m���O���餺�e 
    for (i=0; i< size; i++)
    {
        printf("%d\n",*p);
        p++;  //���ЫᲾ 
    }    
    //Step 4: ��p ���s���V�O���骺�}�Y 
    p=start;
    //step 5: ���w0, 1, 2, ...���Ұt�m���O���� 
    for (i=0;i<size;i++){
        *p=i;
        p++;
        }
    //setp 6: ��p ���s���V�O���骺�}�Y
    p=start;
    //Step 7 :���s��X�Ұt�m�O���骺���e 
    for (i=0;i<size;i++){
        printf("%d\n",*p);
        p++;
        }
    //Step 8: ����O���� 
    system("pause");
}       
