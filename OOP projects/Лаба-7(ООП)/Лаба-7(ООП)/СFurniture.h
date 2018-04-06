/*#include <iostream>
#include <string>
using namespace std;
//#ifndef ÑFurniture
//#define ÑFurniture
class ÑFurniture
{
protected:
	string *name;
	int mass;


public:
	ÑFurniture(string *fname,int fmass);


	

	virtual ~ÑFurniture();
};
//#endif

*/
#pragma once
#include <stdlib.h> 
#include <iostream> 
#include <cstring> 
using namespace std; 


class ÑFurniture {
protected: 
	char* m_pszName;
	int m_nExperience;
public:  ÑFurniture();
		 ÑFurniture(char* name);
		 ÑFurniture(const ÑFurniture& obj);
		 virtual ~ÑFurniture();
		 void SetExperience(int); 
		 int GetExperience(); 

void ShowProperty(); 
virtual void ShowSkill() = 0;
virtual void ShowFullInformation() = 0; 
ÑFurniture& operator=(const ÑFurniture&);
}; 

