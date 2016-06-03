#include <iostream>
using namespace std;
int main()
{	
	int count, sum = 0;	
	for (count = 1; count <= 100; count ++)		// count<=10迴圈成立	
	{		
		sum += count;				// sum=sum+count	
	}	
	cout << "1 + 2 + 3 + ... + 100 = " << sum	<< endl;  // 輸出字串與總和
    system("pause");						
	return 0;
}
