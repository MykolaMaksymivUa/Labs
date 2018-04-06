#include <conio.h> 
#include <iostream> 
#include <string> 
#include <stdlib.h> 
#include <cmath>

using namespace std;


class Device
{
protected:
	char* name;
	int price;
	double rate;
	double lenght;
	double width;



public:
	
	Device::Device(char* fname, int fprice, double frate, double flenght, double fwidth)
	{
		
		name = fname;
		price = fprice;
		rate = frate;
		lenght = flenght;
		width = fwidth;

	}
	Device::Device(){}
	/*void Set(char* fname, int fprice, double frate, double flenght, double fwidth)
	{
		name = fname;
		price = fprice;
		rate = frate;
		lenght = flenght;
		width = fwidth;
	}
	
	virtual void Get()
	{
		cout << "Name:" << name << endl;
		cout << "Price:" << price << endl;
		cout << "Rate:" << rate << endl;
		cout << "Lenght:" << lenght << endl;
		cout << "Width:" << width << endl;
	}*/
	Device::~Device()
	{
		cout << "DECTRUCTO!!!!" << endl;
	
	}

	double virtual priceonrate() = 0;   //абст. метод батьківського класу
	int virtual GetDiagonal() = 0;
	double virtual GetPixel() = 0;

};

class TV:public Device
{
public:

	TV(char* fname, int fprice, double frate, double flenght, double fwidth) :Device(fname, fprice, frate,flenght,fwidth){
		diagonal = 1;
	}
	TV():Device(){}

	double virtual TV::priceonrate()
	{
		double analyse=(rate*1000) / price;
		if (analyse >=0.5)
		{
			if (analyse >= 0.7)
				cout << "Price on rate:"<<analyse<<"-you are a very good shopper,that buy that item by this price!!!!" << endl;
			else cout << "Price on rate:" << analyse << "-tts a good buy!!!" << endl;

		}
		else 
		{
			cout << "Price on rate:" << analyse << "-you waste money!!!" << endl;
		}
		return analyse;
		

	}
	int GetDiagonal() {
		diagonal = (sqrt(pow(width, 2) + pow(lenght, 2)))*inch;
		return diagonal;
	}
	double virtual TV::GetPixel()
	{
		pixel = width*lenght * 37, 7952;
		cout << "Pixel on this TV:" << pixel << endl;
		cout << "Resolution:" << (width * 37, 7952) << "x" << (lenght * 37, 7952) << endl;
		return pixel;

	}
	void CheckRate()
	{
		if (rate>= 5||rate<=10)
		{
			if (rate>= 8||rate<=10)
			{
				cout << "Your TV is a very good item!!!!" << endl;
			}
			else
			{
				cout << "It is a simple TV!!" << endl;
			}
		}
		else 
		{
			cout << "It is a bad TV!!!" << endl;
		}
	}

	friend ostream& operator<<(ostream& os, TV& ex)
	{
		os << "Name:" << ex.name << endl;
		os << "Price:" << ex.price << endl;
		os << "Rate of your TV is:" << ex.rate << endl;
		os << "Lenght:" << ex.lenght << endl;
		os << "Width:" << ex.width << endl;
		os << "Diagonal of this TV:" << ex.GetDiagonal() << endl;
		return os;
	}


protected:
	double diagonal;
	const double inch = 0.393701;
	double pixel;
};



int main()
{

	TV obj1("Phillips", 15000, 7, 150, 200);
	cout << obj1;
	obj1.CheckRate();
	obj1.priceonrate();
	obj1.GetPixel();
	_getch();
	cout << "_______________________________________________" << endl;
	TV obj2("Asus", 10000, 8, 150, 150);
	cout << obj2;
	obj2.CheckRate();
	obj2.priceonrate();
	obj2.GetPixel();

	cout << "________________________________________________" << endl;
	TV obj3("Samsung", 30000, 9, 120, 240);
	cout << obj2;
	obj2.CheckRate();
	obj2.priceonrate();
	obj2.GetPixel();

	cout << "________________________________________________" << endl;

	



	_getch();
	return 0;
}
