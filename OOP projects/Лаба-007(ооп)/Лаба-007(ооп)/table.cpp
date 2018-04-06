#include "table.h"



Ctable::Ctable() : ÑFurniture()
{
	cout << "Ctable Default Constructor" << endl;

	m_pszTableMaterial = "No name";
}


Ctable::Ctable(string name, string tablematerial) : ÑFurniture(name)
{
	cout << "Ctable Constructor" << endl;
	m_pszTableMaterial = tablematerial;
}

	Ctable::~Ctable()
	{ 
		cout << "Ctable Destructor" << endl; 
	}


void Ctable::ShowProperty()
{
	cout << "I have a table:" <<endl;
}


void Ctable::ShowMaterial() {
	cout << "Material of this commode:"<< m_pszTableMaterial << endl;
}

void Ctable::ShowFullInformation()
{
	cout << "It is  "<<m_pszName<< " from " << m_pszTableMaterial << ".Price of it:" << Price << " $$" << endl;
	ShowProperty();  ShowMaterial();
	cout << "-------------------------" << endl;
}

