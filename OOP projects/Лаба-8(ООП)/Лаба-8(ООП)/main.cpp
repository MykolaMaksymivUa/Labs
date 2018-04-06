#include <iostream> 
#include <iomanip>
#include "Matrix.h" 
using namespace std; 


int main(void)
{
	cout << "1st Array:" << endl;
	Matrix<int> m(4, 4);
	cout << m;
	cout << "After sort!" << endl;
	m.QuickSort();
	cout << m;

	cout << "2nd Array:" << endl;
	Matrix<int> m2(4, 4);
	cout << m2;
	cout << "After sort!" << endl;
	m2.QuickSort();
	cout << m2;
	m = m2;
	cout << m;


	system("pause");
	return 0;
}