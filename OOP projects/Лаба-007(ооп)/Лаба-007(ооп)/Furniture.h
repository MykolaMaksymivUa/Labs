#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef Furniture
#define Furniture
class �Furniture {
protected:
	string m_pszName;
	double Price;
	
public:  �Furniture();
		 �Furniture(string name);
		 void SetPrice(double m_price);
		 double GetPrice();
		
		virtual ~�Furniture();
		void ShowProperty();

		virtual void ShowMaterial() = 0;
		virtual void ShowFullInformation() = 0;
		�Furniture& operator=(const �Furniture&);
		 
};
#endif
