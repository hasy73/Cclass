#include <iostream>
using namespace std;
int main()
{	
	int count, sum = 0;	
	for (count = 1; count <= 100; count ++)		// count<=10�j�馨��	
	{		
		sum += count;				// sum=sum+count	
	}	
	cout << "1 + 2 + 3 + ... + 100 = " << sum	<< endl;  // ��X�r��P�`�M
    system("pause");						
	return 0;
}
