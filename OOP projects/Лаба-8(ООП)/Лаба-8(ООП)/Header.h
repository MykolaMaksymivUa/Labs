#pragma once
// matrix.h #ifndef matrix_h__ #define matrix_h__ 

#include <iostream> 
#include <iomanip> 

using namespace std;

template<class T> 
class Matrix {
private:  T **m_iArr;  
		  int size_row;
	
int size_col; 
public:  //конструктор за замовчуванням  
	Matrix();  //конструктор з параметрами  
	Matrix(int size_row_BuUser, int size_col_BuUser);  
	//конструктор копіюванням 
	Matrix(const Matrix& init);  
	//деструктор  
	~Matrix();  
	//перевантаження оператора виводу  
	friend ostream& operator<< <> (ostream&, Matrix<T>&); 
	// перевантаження оператора присвоєння 
	Matrix& operator=(Matrix<T>& rhs); 
	//ініціалізація матриці вручну  
	void init_matrix(); 
	//підрахунок нулів в матриці 
	int count_null(); 

};

//конструктор за замовчуванням 
template <class T> Matrix<T>::Matrix() {  
	size_col = 0;  
	size_row = 0; 
	m_iArr = new T *[size_row];  
	for (int i = 0; i < size_row; i++)  
	{   
		m_iArr[i] = new T[size_col];  
		for (int j = 0; j < size_col; j++)  
		{   
			m_iArr[i][j] = 0;  
		}  
	} 
} 

//конструктор з параметрами 
template <class T> Matrix<T>::Matrix(int size_row_BuUser, int size_col_BuUser)
{  size_row = size_col_BuUser;  
size_col = size_row_BuUser;  
m_iArr = new T *[size_row]; 

for(int i = 0; i < size_row; i++) {
	m_iArr[i] = new T[size_col];
		for (int j = 0; j < size_col; j++) {
			m_iArr[i][j] = 0;

		}
}  cout << "Matrix for random enter - 1\nMatrix for user enter -2" << endl << "Please enter:";  
int l = 1; 
cin >> l;  
switch (l) 
{

case 1:  for (int i = 0; i < size_row; i++)    
	for (int j = 0; j < size_col; j++) {
		m_iArr[i][j] = rand() % 99; 
	}   break;  
case 2:   for (int i = 0; i < size_row; i++)    
	for (int j = 0; j < size_col; j++) 
	{ 
		cout << "a[" << i << "]" << "[" << j << "]" << "=";    
		cin >> m_iArr[i][j]; 
	}   
		  break; 
}

}

//контруктор копіюванням
template<class T> Matrix<T>::Matrix(const Matrix<T>& init) 
{
	if (&m_iArr != 0)
	{ 
		for (int j = 0; j < size_row; j++) 
		{ 
			delete m_iArr[j]; 
		}   
		delete[] m_iArr; 
	}  
	size_row = init.size_row;  
	size_col = init.size_col;  
	m_iArr = new T *[size_row];

	for (int i = 0; i < size_row; i++) 
	{
			m_iArr[i] = new T[size_col];   
			for (int j = 0; j < size_col; j++) 
			{
			m_iArr[i][j] = 0;

		}

	}  
	for (int i = 0; i < size_row; i++)   
		for (int j = 0; j < size_col; j++) 
		{ 
			m_iArr[i][j] = init.m_iArr[i][j]; 
		}
}

//деструктор 
template<class T> Matrix<T>::~Matrix() 
{  for (int j = 0; j < size_row; j++)  
{   delete m_iArr[j];  
}  
delete[] m_iArr; 
}

//перевантаження оператора виводу 
template <class T> ostream& operator<<(ostream& output, Matrix<T>& matr) 
{  for (int i = 0; i < matr.size_row; i++)  
{   for (int j = 0; j < matr.size_col; j++)   
{    output << matr.m_iArr[i][j] << "  ";   
}   
output << endl;  
}  output << endl;  
return output; 
} 

//перевантаження оператора присвоєння 
template<class T> Matrix<T>& Matrix<T>::operator= (Matrix<T>& matr) 
{  if (this != &matr) 
	{   
	if (&m_iArr != 0) 
	{    
		for (int j = 0; j < size_row; j++) 
		{
			delete m_iArr[j]; 
		}    
		delete[] m_iArr;   
	}   
	size_row = matr.size_row;   
	size_col = matr.size_col;   
	m_iArr = new T *[size_row];

for (int i = 0; i < size_row; i++) 
{
	m_iArr[i] = new T[size_col];    
	for (int j = 0; j < size_col; j++) 
	{
		m_iArr[i][j] = 0;

	}
}   for (int i = 0; i < size_row; i++)    
	for (int j = 0; j < size_col; j++) 
	{ 
		m_iArr[i][j] = matr.m_iArr[i][j]; 
	}  
	}  cout << "Operator =" << endl;  return *this; 
}

//ініціалізація матриці вручну 
template<class T> void Matrix<T>::init_matrix() 
{  //видалення існуючої  
	if (&m_iArr != 0)  
	{   for (int j = 0; j < size_row; j++)   
	{    
		delete m_iArr[j];   
	}   
	delete[] m_iArr;  }  
	//створення нової  
	cout << "enter row:";  
	cin >> size_row;  
	cout << "enter col:";  
	cin >> size_col; 

	m_iArr = new T *[size_row];

	for (int i = 0; i < size_row; i++) 
	{
	
		m_iArr[i] = new T[size_col];   
		for (int j = 0; j < size_col; j++) 
		{
		m_iArr[i][j] = 0;
		}
}

cout << "Matrix for random enter - 1\nMatrix for user enter 2\nPlease enter:";  
int l = 1;  cin >> l;  switch (l) 
{
case 1:   for (int i = 0; i < size_row; i++)    
	for (int j = 0; j < size_col; j++) 
	{
	m_iArr[i][j] = rand() % 99;

}  
		  break; 
case 2:   for (int i = 0; i < size_row; i++)    
	for (int j = 0; j < size_col; j++) 
	{
		cout << "a[" << i << "]" << "[" << j << "]" << "=";    
		cin >> m_iArr[i][j]; }   break;
} }

template<class T> int Matrix<T>::count_null() {
	int count_null = 0; 
	for (int i = 0; i < size_row; i++)   
		for (int j = 0; j<size_col; j++)
		{
			if (m_iArr[i][j] == 0) 
			{ count_null++; 
			} 
		}
	
		cout << count_null << endl;  
		return count_null;
}
