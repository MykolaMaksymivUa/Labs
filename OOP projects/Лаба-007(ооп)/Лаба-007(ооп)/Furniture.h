#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef Furniture
#define Furniture
class ÑFurniture {
protected:
	string m_pszName;
	double Price;
	
public:  ÑFurniture();
		 ÑFurniture(string name);
		 void SetPrice(double m_price);
		 double GetPrice();
		
		virtual ~ÑFurniture();
		void ShowProperty();

		virtual void ShowMaterial() = 0;
		virtual void ShowFullInformation() = 0;
		ÑFurniture& operator=(const ÑFurniture&);
		 
};
#endif
