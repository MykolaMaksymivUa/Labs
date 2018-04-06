#include<iostream>
#include<cstring>
#include<conio.h>

using namespace std;

long func(long *Arr, int length)
{
	static int min = Arr[0];
	for (int i(1); i < length; i++)
	{
		if (min>Arr[i] && (Arr[i] % 2) == 0)
			min = Arr[i];
	}
		
	return min;
	}

float func(float*Arr, int length)
{
	float ost = 0, x = 0;
	register float min = Arr[0];
	for (int i(1); i < length; i++)
	{
		ost = modf(Arr[i], &x);
		int z;
		z=(int) x;
		if (min>Arr[i] && (z % 2) == 0)
			min = Arr[i];
	}

	return min;
}

int main()
{
	static long Arr[] = { 6,2,3,4,5,6};
	static int lenght = sizeof(Arr) / sizeof(int);
	register float Arr1[] = { 2.9,3.1,5.8,2.8,1.5,1.4 };
	register int lenght1 = sizeof(Arr) / sizeof(int);
	
	cout <<"Sum of 1st array:"<<func(Arr, lenght)<<endl;
	cout << "Sum of 2nd array:" << func(Arr1, lenght1);


	_getch();
	return 0;
}