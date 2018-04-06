/*#pragma once
#include "ÑFurniture.h"
#include <iostream>
#include <string>
using namespace std;
class Ccommode :virtual public ÑFurniture
{
protected:
	string colour;
public:
	Ccommode();
	virtual~Ccommode();
};
*/
#pragma once
#include "ÑFurniture.h" 
#include <cstring> 
 
class Ccommode : virtual public ÑFurniture
{ protected:  
	char* m_pszCarName;
public: 
	Ccommode();  
	Ccommode(char* name, char* carName );  
	Ccommode(const Ccommode& obj);  
	virtual ~Ccommode(); 
	void ShowProperty();  
	virtual void ShowSkill();  
	virtual void ShowFullInformation();  
	Ccommode& operator=(Ccommode&); 
}; 
