
#define _CRT_SECURE_NO_WARNINGS

#include "CfoldingTable.h"

int main() {
	cout << "----- Creating objects -----" << endl;  
	Ccommode a1("Ivan", "Lazy");  
	a1.SetExperience(1);  
	a1.ShowFullInformation();      
	Ctable a2("Ivan", "Lion");  
	a2.SetExperience(2);  
	a2.ShowFullInformation();       
	CfoldingTable a3("Ivan", "Crazy", "Bull");  
	a3.SetExperience(3);  
	a3.ShowFullInformation();      
	CfoldingTable a4 = a3;
	a4.ShowFullInformation();

	CfoldingTable a5(a4);
	a5.ShowFullInformation();   
	a1 = a5;  
	a1.ShowFullInformation();
	CfoldingTable a6(a4);   
	a6.ShowFullInformation();


	//------------------------------------------------------------------  
	cout << "----- Creating reference -----" << endl;    
	cout << "----- CRacer &ref1 = a1; -----" << endl;  
	ÑFurniture &ref1 = a1;
	ref1.ShowFullInformation();    
	cout << "----- ref1 = a2; -----" << endl;  
	ref1 = a2;  
	ref1.ShowFullInformation(); 

	cout << "----- CRacer &ref2 = a2; -----" << endl; 
	ÑFurniture &ref2 = a2;
	ref2.ShowFullInformation();
	cout << "----- CRacer &ref3 = a2; -----" << endl;  
	ÑFurniture &ref3 = a3;  
	ref3.ShowFullInformation();
		//------------------------------------------------------------------  
	cout << "----- Creating dynamic objects -----" << endl;
	cout << "----- CRacer* ptr1 = new CAutoRacer(\"Taras\", \"Flash\") ----" << endl;  
	ÑFurniture* ptr1 = new Ccommode("Taras", "Flash");
	ptr1->SetExperience(1);  
	ptr1->ShowProperty();  
	ptr1->ShowSkill();  
	ptr1->ShowFullInformation();    
	cout << "----- CRacer* ptr2 = new CMotoRacer(\"Oleg\", \"Chiky\"); ----" << endl;  
	ÑFurniture* ptr2 = new Ctable("Oleg", "Chiky");  
	ptr2->SetExperience(2);  
	ptr2->ShowProperty();  
	ptr2->ShowSkill();  
	ptr2->ShowFullInformation();

	cout << "----- CRacer* ptr3 = new CAutoMotoRacer(\"Yura\", \"Bull\", \"Bulldog\"); -----" << endl;  
	ÑFurniture* ptr3 = new CfoldingTable("Yura", "Bull", "Bulldog");
	ptr3->SetExperience(3);  
	ptr3->ShowProperty();  
	ptr3->ShowSkill();  
	ptr3->ShowFullInformation();

	cout << "----- CAutoRacer *ptr4 = new CAutoRacer(\"Ostap\", \"Little\"); -----" << endl;  
	Ccommode *ptr4 = new Ccommode("Ostap", "Little");   
	ptr4->SetExperience(4);  
	ptr4->ShowProperty(); 
	ptr4->ShowSkill();  
	ptr4->ShowFullInformation();

	cout << "----- CMotoRacer *ptr5 = new CMotoRacer(\"Igor\", \"MadDog\"); -----" << endl;  
	Ctable *ptr5 = new Ctable("Igor", "MadDog");  
	ptr5->SetExperience(5);  
	ptr5->ShowProperty();
	ptr5->ShowSkill();  
	ptr5->ShowFullInformation();

	cout << "----- CAutoMotoRacer *ptr6 = new CAutoMotoRacer(\"Mark\", \"Flame\", \"Lover\"); -----" << endl;  
	CfoldingTable *ptr6 = new CfoldingTable ("Mark", "Flame", "Lover");  
	ptr6->SetExperience(6);  
	ptr6->ShowProperty();  
	ptr6->ShowSkill();  
	ptr6->ShowFullInformation();

	//------------------------------------------------------------------  
	cout << "delete ptr1 " << endl;  
	delete ptr1;  
	cout << "-------------------------" << endl << "delete ptr2 " << endl;  
	delete ptr2;  
	cout << "-------------------------" << endl << "delete ptr3 " << endl;  
	delete ptr3; 
	cout << "-------------------------" << endl << "delete ptr4 " << endl;  
	delete ptr4;
	cout << "-------------------------" << endl << "delete ptr5 " << endl;  
	delete ptr5;
	cout << "-------------------------" << endl << "delete ptr6 " << endl;  
	delete ptr6;
	cout << "-------------------------" << endl; 

	system("pause");  
	return 0;
}