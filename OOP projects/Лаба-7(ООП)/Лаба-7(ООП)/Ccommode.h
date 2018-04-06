/*#pragma once
#include "�Furniture.h"
#include <iostream>
#include <string>
using namespace std;
class Ccommode :virtual public �Furniture
{
protected:
	string colour;
public:
	Ccommode();
	virtual~Ccommode();
};
*/
#pragma once
#include "�Furniture.h" 
#include <cstring> 
 
class Ccommode : virtual public �Furniture
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
