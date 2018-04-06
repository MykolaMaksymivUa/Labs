/*#include "�Furniture.h"



�Furniture::�Furniture(string *fname, int fmass)
{
	cout << "CFurniture Default Constructor" << endl;
	name = fname;
	mass = fmass;
}



�Furniture::~�Furniture()
{
}
*/
#define _CRT_SECURE_NO_WARNINGS

#include "�Furniture.h" 

�Furniture::�Furniture() : m_pszName(new char[20]), m_nExperience(0) 
{ 
	cout << "�Furniture Default Constructor" << endl;  
	strcpy(m_pszName, "No name"); 
}

�Furniture::�Furniture(char* name) { 
	cout << "�Furniture Constructor" << endl;  
	m_pszName = new char[strlen(name) + 1];  
	strcpy(m_pszName, name);
}

�Furniture::�Furniture(const �Furniture& obj) 
{
	cout << "�Furniture Copy Constructor" << endl;
		m_pszName = new char[strlen(obj.m_pszName) + 1];  
		strcpy(m_pszName, obj.m_pszName);
}

�Furniture::~�Furniture() { 
	cout << "�Furniture Destructor" << endl;  
	delete[] m_pszName; }

void �Furniture::SetExperience(int exp) { m_nExperience = exp; }

int �Furniture::GetExperience() { return m_nExperience; } 
void �Furniture::ShowProperty() { 
	cout << "I have no properties" << endl;
	cout << "-------------------------" << endl;
}

�Furniture& �Furniture::operator=(const �Furniture& obj) 
{
	if (this != &obj) 
	{
		cout << "�Furniture operator=" << endl;   
		delete[] m_pszName;  
		m_pszName = new char[strlen(obj.m_pszName) + 1];   
		strcpy(m_pszName, obj.m_pszName); 
	}  
	return *this; 
}