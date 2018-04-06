#include "Furniture.h"




�Furniture::�Furniture() : Price(0)
{
	cout << "�Furniture Default Constructor" << endl;
	m_pszName = "No name";
	
}

�Furniture::�Furniture(string name) {
	cout << "�Furniture Constructor" << endl;
	m_pszName = name;
	
}

�Furniture::~�Furniture() {
	cout << "�Furniture Destructor" << endl;

}

void �Furniture::SetPrice(double m_price) { Price = m_price; }

double �Furniture::GetPrice() { return Price; }

void �Furniture::ShowProperty() {
	cout << "I have no properties" << endl;
	cout << "-------------------------" << endl;
}

�Furniture& �Furniture::operator=(const �Furniture& obj)
{
	if (this != &obj)
	{
		cout << "�Furniture operator=" << endl;
		m_pszName = obj.m_pszName;

	}
	return *this;
}