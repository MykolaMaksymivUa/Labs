#pragma once
#include<iostream>
#include<iomanip>


using namespace std;


template <class T>

class Matrix
{
protected:
	T **array;
	int size_row;
	int size_col;
public:
	Matrix();
	Matrix(int row, int column);
	~Matrix();
	void QuickSort();//сортування 
	friend ostream& operator<< <> (ostream&, Matrix<T>&);
	Matrix& operator=(Matrix<T>& rhs);




};

template <class T> 
ostream& operator<<(ostream& output, Matrix<T>& matr)
{
	for (int i = 0; i < matr.size_row; i++)
	{
		for (int j = 0; j < matr.size_col; j++)
		{
			output << matr.array[i][j] << "  ";
		}
		output << endl;
	}  output << endl;
	return output;
}
template <class T> 
Matrix<T>::Matrix()
{
	cout << "Default constructor!" << endl;
	size_row = 0;
	size_col = 0;
	array = new T*[size_row];

	for (int i(0); i < size_row; i++)
	{
		array[i] = new T[size_col];
		for (int j(0); j < size_col; j++)
		{
			array[i][j] = 0;
		}
	}

}
template <class T> 
Matrix<T>::Matrix(int row, int column)
{
	cout << "Constructor with parametrs!" << endl;
	size_row = row;
	size_col = column;
	array = new T*[size_row];

	for (int i(0); i < size_row; i++)
	{
		array[i] = new T[size_col];
		for (int j(0); j < size_col; j++)
		{
			array[i][j] = rand() % 89+9;
		}
	}

}
template<class T> 
Matrix<T>& Matrix<T>::operator= (Matrix<T>& matr)
{
	if (this != &matr)
	{
		if (&array != 0)
		{
			for (int j = 0; j < size_row; j++)
			{
				delete array[j];
			}
			delete[] array;
		}
		size_row = matr.size_row;
		size_col = matr.size_col;
		array = new T *[size_row];

		for (int i = 0; i < size_row; i++)
		{
			array[i] = new T[size_col];
			for (int j = 0; j < size_col; j++)
			{
				array[i][j] = 0;

			}
		}   for (int i = 0; i < size_row; i++)
			for (int j = 0; j < size_col; j++)
			{
				array[i][j] = matr.array[i][j];
			}
	}  cout << "Operator =" << endl;  
	return *this;
}
template<class T> 
void Matrix<T>::QuickSort()
{

	T* arr = new T[size_row*size_col];
	int k = 0;
	for (int i(0); i < (size_row); i++)
	{
		for (int j(0); j < size_col; j++)
		{
			arr[k++] = array[i][j];
		}
	}
	//sortirovka odnov. masiva

	for (int i(1); i <= (size_row*size_col); i++)
	{
		for (int j(0); j < (size_row*size_col - i); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			
		}
	}
	int g = 0;
	for (int i = 0; i<size_row; i++)
	{
		for (int j = 0; j<size_col; j++)
		{
			array[i][j] = arr[g++];
		}
	}
	//DELETE 2nd arr


	delete[]  arr;

}
template<class T> 
Matrix<T>::~Matrix()
{
	for (int j = 0; j < size_row; j++)
	{
		delete array[j];
	}
	delete[] array;
}