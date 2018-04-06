/*#include "Ccommode.h"



Ccommode::Ccommode()
{
}


Ccommode::~Ccommode()
{
}
*/
#define _CRT_SECURE_NO_WARNINGS

#include "Ccommode.h" 

Ccommode::Ccommode() : ÑFurniture() {
	cout << "Ccommode Default Constructor" << endl;  m_pszCarName = new char[20];
		strcpy(m_pszCarName, "No name");
}

Ccommode::Ccommode(char* name, char* carName) : ÑFurniture(name)
{ 
	cout << "Ccommode Constructor" << endl;  
	m_pszCarName = new char[strlen(carName) + 1];  
	strcpy(m_pszCarName, carName); 
}

Ccommode::Ccommode(const Ccommode& obj) : ÑFurniture(obj) { 
	cout << "Ccommode Copy Constructor" << endl;  
	m_pszCarName = new char[strlen(obj.m_pszCarName) + 1];  
	strcpy(m_pszCarName, obj.m_pszCarName); 
}

Ccommode::~Ccommode() { 
	cout << "Ccommode Destructor" << endl;  
	delete[] m_pszCarName; 
}

void Ccommode::ShowProperty() { 
	cout << "I have car: " << m_pszCarName << endl; 
}

void Ccommode::ShowSkill() { 
	cout << "I can ride a car" << endl; 
}

void Ccommode::ShowFullInformation() { 
	cout << "My name is " << m_pszName << ", my experience is " << m_nExperience << " years" << endl;  
	ShowProperty();  ShowSkill();  
	cout << "-------------------------" << endl; 
}

Ccommode& Ccommode::operator=(Ccommode& obj) {
	if (this != &obj)
	{  
		cout << "Ccommode operator=" << endl;   
	delete[] m_pszCarName;   
	m_pszName = new char[strlen(obj.m_pszCarName) + 1];   
	strcpy(m_pszCarName, obj.m_pszCarName);   
	ÑFurniture::operator=(obj);
	} 
	return *this;
}