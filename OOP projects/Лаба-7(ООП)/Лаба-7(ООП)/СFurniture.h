/*#include <iostream>
#include <string>
using namespace std;
//#ifndef �Furniture
//#define �Furniture
class �Furniture
{
protected:
	string *name;
	int mass;


public:
	�Furniture(string *fname,int fmass);


	

	virtual ~�Furniture();
};
//#endif

*/
#pragma once
#include <stdlib.h> 
#include <iostream> 
#include <cstring> 
using namespace std; 


class �Furniture {
protected: 
	char* m_pszName;
	int m_nExperience;
public:  �Furniture();
		 �Furniture(char* name);
		 �Furniture(const �Furniture& obj);
		 virtual ~�Furniture();
		 void SetExperience(int); 
		 int GetExperience(); 

void ShowProperty(); 
virtual void ShowSkill() = 0;
virtual void ShowFullInformation() = 0; 
�Furniture& operator=(const �Furniture&);
}; 

