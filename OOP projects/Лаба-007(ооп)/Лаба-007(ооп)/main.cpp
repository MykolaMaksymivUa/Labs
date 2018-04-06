#include "FoldingTable.h"
#include <conio.h>


int main() 
{
	setlocale(LC_ALL, "English");
	cout << "----- Creating objects -----" << endl;
	Ctable a1("Table","steel");
	a1.SetPrice(1000);
	a1.ShowFullInformation();

	Ctable a2("Stil Chaika", "fanera");
	a2.SetPrice(25);
	a2.ShowFullInformation();

	CfoldingTable a3("Folding Table ","gold","plastic");
	a3.SetPrice(290);
	a3.ShowFullInformation();
	CfoldingTable a4 = a3;
	a4.ShowFullInformation();

	CfoldingTable a5(a4);
	a5.ShowFullInformation();
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
	cout << "----- ÑFurniture* ptr1 = new Ccommode(\"Commode\", \"wood\") ----" << endl;
	ÑFurniture* ptr1 = new Ccommode("American commode", "wood");
	ptr1->SetPrice(1);
	ptr1->ShowProperty();
	ptr1->ShowMaterial();
	ptr1->ShowFullInformation();
	cout << "----- ÑFurniture* ptr2 = new Ctable(\"English table\", \"red oak\"); ----" << endl;
	ÑFurniture* ptr2 = new Ctable("English table", "red oak");
	ptr2->SetPrice(2);
	ptr2->ShowProperty();
	ptr2->ShowMaterial();
	ptr2->ShowFullInformation();

	cout << "----- ÑFurniture* ptr3 = new CfoldingTable(\"Golen folding table \", \"plastic\", \"plastic\"); -----" << endl;
	ÑFurniture* ptr3 = new CfoldingTable("Golen folding table", "plastic", "plastic");
	ptr3->SetPrice(3);
	ptr3->ShowProperty();
	ptr3->ShowMaterial();
	ptr3->ShowFullInformation();

	cout << "----- Ccommode *ptr4 = new Ccommode(\"Red commode\", \"pine\"); -----" << endl;
	Ccommode *ptr4 = new Ccommode("Red commode", "pine");
	ptr4->SetPrice(4);
	ptr4->ShowProperty();
	ptr4->ShowMaterial();
	ptr4->ShowFullInformation();

	

	//------------------------------------------------------------------  
	cout << "delete ptr1 " << endl;
	delete ptr1;
	cout << "-------------------------" << endl << "delete ptr2 " << endl;
	delete ptr2;
	cout << "-------------------------" << endl << "delete ptr3 " << endl;
	delete ptr3;
	cout << "-------------------------" << endl << "delete ptr4 " << endl;
	delete ptr4;
	cout << "-------------------------" << endl;
	_getch();
	_getch();
	return 0;
}
