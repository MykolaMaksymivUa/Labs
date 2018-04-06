#pragma once
#include "Furniture.h" 
#include <string> 

#ifndef Commode
#define Commode


class Ccommode : virtual public ÑFurniture
{
protected:
	string m_pszCommodeMaterial;
public:
	Ccommode();
	Ccommode(string name, string commodematerial);
	virtual ~Ccommode();
	void ShowProperty();
	virtual void ShowMaterial();
	virtual void ShowFullInformation();
	Ccommode& operator=(Ccommode&);

};
#endif // !Commode