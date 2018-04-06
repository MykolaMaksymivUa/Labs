#pragma once
#include "Furniture.h"
#include <string>
#ifndef table
#define table

using namespace std;
class Ctable : virtual public ÑFurniture
{
protected:
	string m_pszTableMaterial;
public:  Ctable();
		 Ctable(string name , string tablematerial);
		 virtual ~Ctable();

		 void ShowProperty();

		 virtual void ShowMaterial();
		 virtual void ShowFullInformation();
	
};
#endif // !table