#pragma once
/*#include "ÑFurniture.h"
class Ctable :virtual public ÑFurniture
{
protected:
	int lenght;
	int width;
public:
	Ctable();
	virtual~Ctable();
};

*/
#include "ÑFurniture.h"
#include <cstring> 

class Ctable : virtual public ÑFurniture
{
protected:  
	char* m_pszBikeName; 
public:  Ctable();  
		 Ctable(char* name, char* bikeName );   
		 Ctable(const Ctable& obj);  
		 virtual ~Ctable(); 

void ShowProperty();

virtual void ShowSkill();  
virtual void ShowFullInformation();  
Ctable& operator=(Ctable&); 
};
