/*#include "Ctable.h"



CfoldingTable::CfoldingTable()
{
}


CfoldingTable::~CfoldingTable()
{
}
*/
#define _CRT_SECURE_NO_WARNINGS

#include "Ctable.h" 
Ctable::Ctable() : ÑFurniture()
{  
	cout << "Ctable Default Constructor" << endl;  
	m_pszBikeName = new char[20];  
	strcpy(m_pszBikeName, "No name");  
} 

Ctable::Ctable(char* name, char* bikeName) : ÑFurniture(name) 
{ 
	cout << "Ctable Constructor" << endl;  
	m_pszBikeName = new char[strlen(bikeName) + 1];  
	strcpy(m_pszBikeName, bikeName); 
}

Ctable::Ctable(const Ctable& obj) : ÑFurniture(obj) 
{ 
	cout << "Ctable Copy Constructor" << endl;  
	m_pszBikeName = new char[strlen(obj.m_pszBikeName) + 1];  
	strcpy(m_pszBikeName, obj.m_pszBikeName); 
}

Ctable::~Ctable() 
{ 
	cout << "Ctable Destructor" << endl;  
	delete[] m_pszBikeName; 
}

void Ctable::ShowProperty() 
{ 
	cout << "I have a bike:" << m_pszBikeName << endl; 
}


void Ctable::ShowSkill() { 
	cout << "I can ride a bike" << endl; 
}

void Ctable::ShowFullInformation() 
{
	cout << "My name is " << m_pszName << ", my experience is " << m_nExperience << " years" << endl;  
	ShowProperty();  
	ShowSkill();  
	cout << "-------------------------" << endl; 
}

Ctable& Ctable::operator=(Ctable& obj)
{
	if (this != &obj)
	{
		cout << "Ctable operator=" << endl;
		delete[] m_pszBikeName;
		m_pszName = new char[strlen(obj.m_pszBikeName) + 1];
		strcpy(m_pszBikeName, obj.m_pszBikeName);
		ÑFurniture::operator=(obj);
	}
	return *this;
}