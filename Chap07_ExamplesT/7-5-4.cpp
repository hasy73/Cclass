// �@���}�C�m�� (��M�̤j��)
#include <iostream>
using namespace std;
int main()
{
  int count, max = 0;                        
  int number[3] = {5, 19, 13};                 
  for (count = 0; count <= 2; count++)       // ��M�̤j�Ȱj��
  {
    if (number[count] > max)                 // �Y�ƭȤj��ثe�̤j��
      max = number[count];                   // �h���N�ثe�̤j��
  }
  cout << "5, 19, 13 �T�ƪ��̤j�� = " << max;  // ��̤ܳj��
  cout << endl;
  system("pause");
  return 0;
}
