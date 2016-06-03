// 蝴皚絤策 (т碝程)
#include <iostream>
using namespace std;
int main()
{
  int count, max = 0;                        
  int number[3] = {5, 19, 13};                 
  for (count = 0; count <= 2; count++)       // т碝程癹伴
  {
    if (number[count] > max)                 // 璝计ヘ玡程
      max = number[count];                   // 玥ヘ玡程
  }
  cout << "5, 19, 13 计程 = " << max;  // 陪ボ程
  cout << endl;
  system("pause");
  return 0;
}
