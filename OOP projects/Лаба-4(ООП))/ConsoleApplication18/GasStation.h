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

		void setV1(int );
		int getV1();

		void setV2(int );
		int getV2();
		void setV3(int);
		int getV3();
		void setV4(int);
		int getV4();

		void SetOutput(double);
		double GetOutput();
	
		int PP1=0;
		int PP2=0;
		int PP3=0;
		int PP4=0;

		const int P1=560;
		const int P2=780;
		const int P3=1000;
		const int P4=358;

		int Zapravka2(int);
		int Zapravka1(int);
		int Zapravka3(int);
		int Zapravka4(int);
		int Zapravka22(int);
		int Zapravka11(int);
		int Zapravka33(int);
		int Zapravka44(int);

		
		
		~CGasStation();
	};
}
