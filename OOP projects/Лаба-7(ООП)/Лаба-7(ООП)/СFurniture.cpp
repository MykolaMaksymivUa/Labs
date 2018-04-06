/*#include "ÑFurniture.h"



ÑFurniture::ÑFurniture(string *fname, int fmass)
{
	cout << "CFurniture Default Constructor" << endl;
	name = fname;
	mass = fmass;
}



ÑFurniture::~ÑFurniture()
{
}
*/
#define _CRT_SECURE_NO_WARNINGS

#include "ÑFurniture.h" 

ÑFurniture::ÑFurniture() : m_pszName(new char[20]), m_nExperience(0) 
{ 
	cout << "ÑFurniture Default Constructor" << endl;  
	strcpy(m_pszName, "No name"); 
}

ÑFurniture::ÑFurniture(char* name) { 
	cout << "ÑFurniture Constructor" << endl;  
	m_pszName = new char[strlen(name) + 1];  
	strcpy(m_pszName, name);
}

ÑFurniture::ÑFurniture(const ÑFurniture& obj) 
{
	cout << "ÑFurniture Copy Constructor" << endl;
		m_pszName = new char[strlen(obj.m_pszName) + 1];  
		strcpy(m_pszName, obj.m_pszName);
}

ÑFurniture::~ÑFurniture() { 
	cout << "ÑFurniture Destructor" << endl;  
	delete[] m_pszName; }

void ÑFurniture::SetExperience(int exp) { m_nExperience = exp; }

int ÑFurniture::GetExperience() { return m_nExperience; } 
void ÑFurniture::ShowProperty() { 
	cout << "I have no properties" << endl;
	cout << "-------------------------" << endl;
}

ÑFurniture& ÑFurniture::operator=(const ÑFurniture& obj) 
{
	if (this != &obj) 
	{
		cout << "ÑFurniture operator=" << endl;   
		delete[] m_pszName;  
		m_pszName = new char[strlen(obj.m_pszName) + 1];   
		strcpy(m_pszName, obj.m_pszName); 
	}  
	return *this; 
}