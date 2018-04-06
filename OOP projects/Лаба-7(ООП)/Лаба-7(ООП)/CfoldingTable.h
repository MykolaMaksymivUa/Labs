/*#pragma once
#include "Ctable.h"
#include "Ccommode.h"
class CfoldingTable:public Ctable,Ccommode
{
protected:
	double Square;
public:
	CfoldingTable();

	virtual~CfoldingTable();
};

*/
#pragma once
#include "Ctable.h"
#include "Ccommode.h" 

class CfoldingTable : public Ccommode, Ctable
{
public:
	CfoldingTable();
	CfoldingTable(char* name, char* bikeName, char* carName);
	CfoldingTable(const CfoldingTable& obj);
	virtual ~CfoldingTable();
	void ShowProperty();
	virtual void ShowSkill();
	virtual void ShowFullInformation();
	CfoldingTable& operator=(CfoldingTable&);
};
