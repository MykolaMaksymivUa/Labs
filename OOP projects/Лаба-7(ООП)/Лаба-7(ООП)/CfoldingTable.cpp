#define _CRT_SECURE_NO_WARNINGS

#include "CfoldingTable.h"
/*


CfoldingTable::CfoldingTable()
{
}


CfoldingTable::~CfoldingTable()
{
}
*/


CfoldingTable::CfoldingTable() : ÑFurniture(), Ccommode(), Ctable() 
{ 
	cout << "CfoldingTable Default Constructor" << endl; 
}

CfoldingTable::CfoldingTable(char* name, char* bikeName, char* carName) : ÑFurniture(name), Ccommode(name, carName), Ctable(name, bikeName) 
{ 
	cout << "CfoldingTable Constructor" << endl; 
}


CfoldingTable::CfoldingTable(const CfoldingTable& obj) : ÑFurniture(obj), Ccommode(obj), Ctable(obj) 
{ 
	cout << "CfoldingTable Copy Constructor" << endl; 
}

CfoldingTable::~CfoldingTable() 
{ 
	cout << "CfoldingTable Destructor" << endl; 
}

void CfoldingTable::ShowProperty() 
{ 
	cout << "I have car " << m_pszCarName << " and bike " << m_pszBikeName << endl; 
}

void CfoldingTable::ShowSkill() 
{ 
	cout << "I can ride a car and a bike" << endl; 
}

void CfoldingTable::ShowFullInformation() 
{
	cout << "My name is " << m_pszName << ", my experience is " << m_nExperience << " years" << endl;  
	ShowProperty();  ShowSkill();  
	cout << "-------------------------" << endl; 
}

CfoldingTable& CfoldingTable::operator=(CfoldingTable& obj) 
{ 
	if (this != &obj) 
	{
		cout << "CfoldingTable operator=" << endl;   
		Ccommode::operator=(obj);
		Ctable::operator=(obj); 
	}  
	return *this; 
}