//Gasstation.h
#pragma once
namespace P {
	class CGasStation
	{
	private:
		int V1 = 10000;
		int V2 = 10000;
		int V3 = 10000;
		int V4 = 10000;
		double output = 0.10;

	public:
		CGasStation();

		void setV1(int);
		int getV1();

		void setV2(int);
		int getV2();
		void setV3(int);
		int getV3();
		void setV4(int);
		int getV4();

		void SetOutput(double);
		double GetOutput();

		int PP1 = 580;
		int PP1 = 787;
		int PP1 = 546;
		int PP1 = 510;


		const int P1 = 0;
		const int P2 = 0;
		const int P3 = 1000;
		const int P4 = 358;

		int Zapravka2(int);
		int Zapravka1(int);
		int Zapravka3(int);
		int Zapravka4(int);
		int Zapravka22(int);
		int Zapravka11(int);
		int Zapravka33(int);
		int Zapravka44(int);

		CGasStation operator+();

		
		CGasStation operator--();
		CGasStation operator!=(CGasStation&);
		CGasStation operator[](CGasStation&);


		~CGasStation();
	};
}
