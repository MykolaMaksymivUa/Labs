#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

class CGasStation
{
public:
	int *P;
	const int V1 = 1000;
	const int V2 = 1000;
	const int V3 = 1000;
	const int V4 = 1000;
	double output = 1.10;
	CGasStation::CGasStation()
	{
		P = new int[4];

	}




	friend ostream &operator<<(ostream &stream, CGasStation ex)
	{
		stream << ex.output;
		return stream;
	}

	int &operator[](int n)
	{

		return P[n];
	}
	friend void operator--(CGasStation &obj)
	{
		--obj.output;
	}
	CGasStation operator=(CGasStation &obj)
	{
		delete[] P;
		P = new int[4];
		for (int i(0); i < 4; i++)
		{
			P[i] = obj.P[i];
		}
		return *this;

	}
	int &operator+(CGasStation &obj)
	{
		int result;
		result = obj.P[0] + (obj.P[1]) + (obj.P[2]) + (obj.P[3]);
		return result;
	}

	CGasStation::~CGasStation()
	{
		delete[] P;
	}

};

int main(int argc, char** argv)
{
	CGasStation obj;

	--obj;
	cout << obj;













	_getch();
	return 0;
}