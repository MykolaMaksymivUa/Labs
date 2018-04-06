#include "FoldingTable.h"


CfoldingTable::CfoldingTable() : ÑFurniture(), Ccommode(), Ctable()
{
	cout << "CfoldingTable Default Constructor" << endl;
}

CfoldingTable::CfoldingTable(string name, string tablematerial, string commodematerial) : ÑFurniture(name), Ccommode(name, commodematerial), Ctable(name, tablematerial)
{
	cout << "CfoldingTable Constructor" << endl;
	m_pszTableMaterial = tablematerial;
	m_pszCommodeMaterial = commodematerial;
		

}



CfoldingTable::~CfoldingTable()
{
	cout << "CfoldingTable Destructor" << endl;
}

void CfoldingTable::ShowProperty()
{
	cout << "I have table and commode "<< endl;
}

void CfoldingTable::ShowMaterial()
{
	cout << "I have a commode with "<<m_pszCommodeMaterial << " and table with " << m_pszTableMaterial << endl;
}

void CfoldingTable::ShowFullInformation()
{
	std::cout << "It is " << m_pszName << ". Price of it " <<Price<< " $$" << endl;
	ShowProperty();  ShowMaterial();
	cout << "-------------------------" << endl;
}

