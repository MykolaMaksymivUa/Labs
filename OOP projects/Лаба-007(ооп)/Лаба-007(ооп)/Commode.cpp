#include "Commode.h" 

Ccommode::Ccommode() : ÑFurniture() {
	cout << "Ccommode Default Constructor" << endl;  
	m_pszCommodeMaterial = "Derevo";

}

Ccommode::Ccommode(string name, string commodematerial) : ÑFurniture(name)
{
	cout << "Ccommode Constructor" << endl;
	m_pszCommodeMaterial = commodematerial;
	m_pszName = name;

}


Ccommode::~Ccommode() {
	cout << "Ccommode Destructor" << endl;
	
}

void Ccommode::ShowProperty() {
	cout << "I have a commode" << endl;
}

void Ccommode::ShowMaterial() 
{
	cout << "Material of this commode:" <<m_pszCommodeMaterial << endl;

}

void Ccommode::ShowFullInformation() {
	cout << "It is "<<m_pszName<<" from " << m_pszCommodeMaterial << ".Price of it:" << Price << " $$" << endl;
	ShowProperty();  ShowMaterial();
	cout << "-------------------------" << endl;
}

Ccommode& Ccommode::operator=(Ccommode& obj) {
	if (this != &obj)
	{
		cout << "Ccommode operator=" << endl;
		
		m_pszName = obj.m_pszName;
		
		ÑFurniture::operator=(obj);
	}
	return *this;
}
