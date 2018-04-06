#include "Furniture.h"




ÑFurniture::ÑFurniture() : Price(0)
{
	cout << "ÑFurniture Default Constructor" << endl;
	m_pszName = "No name";
	
}

ÑFurniture::ÑFurniture(string name) {
	cout << "ÑFurniture Constructor" << endl;
	m_pszName = name;
	
}

ÑFurniture::~ÑFurniture() {
	cout << "ÑFurniture Destructor" << endl;

}

void ÑFurniture::SetPrice(double m_price) { Price = m_price; }

double ÑFurniture::GetPrice() { return Price; }

void ÑFurniture::ShowProperty() {
	cout << "I have no properties" << endl;
	cout << "-------------------------" << endl;
}

ÑFurniture& ÑFurniture::operator=(const ÑFurniture& obj)
{
	if (this != &obj)
	{
		cout << "ÑFurniture operator=" << endl;
		m_pszName = obj.m_pszName;

	}
	return *this;
}