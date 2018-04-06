#pragma once
#include "Commode.h"
#include "table.h"
#include <string>
#ifndef FoldingTable
#define FoldingTable


class CfoldingTable : public Ccommode, Ctable
{
public:
	CfoldingTable();
	CfoldingTable(string name, string tablematerial, string commodematerial);
	
	virtual ~CfoldingTable();
	void ShowProperty();
	virtual void ShowMaterial();
	virtual void ShowFullInformation();
	
};
#endif // !FodlingTable