#include <iostream>
#include <cmath>
#include "GasStation.h"
#include <conio.h>

using namespace std;

using P::CGasStation;

void Menu()
{
	cout << "Введiть необхiдну цифру:" << endl;
	cout << "_____________________________________________________________" << endl;
	cout << "1.Збiльшити к-сть палива"<<endl;
	cout << "2.Вивести iнформацiю на екран" << endl;
	cout << "3.Заправитись паливом" << endl;
	cout << "4.Вийти" << endl;
	cout << "_____________________________________________________________" << endl;
}

int main()
{
	setlocale(LC_CTYPE, "ukr");
	CGasStation c;
	
	int choice;

	while (true)
	{
		Menu();
		cin >> choice;
		
		if (choice == 1)
		{
			int a1, a2, a3, a4;
			int point1, point2, point3, point4;
			cout << "Ви можете збiльшити кожне паливо на необхiдну к-сть" << endl;
			point1:cout << "1 паливо на : ";
			cin >> a1;
			cout << endl;
			if (c.Zapravka1(a1)==NULL)
			{
				cout << "Ви перевищили об*єм бочки!!!!"<<endl;
				goto point1;
			}

			point2:cout << "2 паливо на : ";
			cin >> a2;
			cout << endl;
			if (c.Zapravka2(a2) == NULL)
			{
				cout << "Ви перевищили об*єм бочки!!!!"<<endl;
				goto point2;
			}

			point3:cout << "3 паливо на : ";
			cin >> a3;
			cout << endl;
			if (c.Zapravka3(a3) == NULL)
			{
				cout << "Ви перевищили об*єм бочки!!!!"<<endl;
				goto point3;
			}

			point4:cout << "4 паливо на : ";
			cin >> a4;
			cout << endl;
			if (c.Zapravka4(a4) == NULL)
			{
				cout << "Ви перевищили об*єм бочки!!!!"<<endl;
				goto point4;
			}

			continue;

		}

		if (choice == 2)
		{
			cout << "Об*єм 1ої бочки:" << c.getV1() << endl;
			cout << "Об*єм 2ої бочки:" << c.getV2() << endl;
			cout << "Об*єм 3ої бочки:" << c.getV3() << endl;
			cout << "Об*єм 4ої бочки:" << c.getV4() << endl;
			cout << "К-сть палива:" << c.PP1 << endl;
			cout << "К-сть палива:" << c.PP2 << endl;
			cout << "К-сть палива:" << c.PP3 << endl;
			cout << "К-сть палива:" << c.PP4 << endl;

			continue;
		}
		if (choice == 3)
		{
			int choice1;
			int a1, a2, a3, a4;
			double t1, t2, t3, t4;
			int point11, point22, point33, point44;
			cout << "Ви можете заправитись одним паливом:" << endl;
			cin >> choice1;

			if (choice1 == 1)
			{
				point11:cout << "1 паливо : ";
				cin >> a1;
				cout << endl;
				if (c.Zapravka11(a1) == NULL)
				{
					cout << "Ви перевищили об*єм палива!!!!" << endl;
					goto point1;
				}
				t1 = (double)(a1)*c.GetOutput();
				cout << "Time:" << t1 << endl;
				cout << "____________________________________________________________________________________" << endl;
				break;
			}

			if (choice1 == 2)
			{
				point22:cout << "2 паливо : ";
				cin >> a2;
				cout << endl;
				if (c.Zapravka22(a2) == NULL)
				{
					cout << "Ви перевищили об*єм палива!!!!" << endl;
					goto point2;
				}
				t2 = (double)(a2)*c.GetOutput();
				cout << "Time:" << t2 << endl;
				cout << "____________________________________________________________________________________" << endl;
				break;
			}

			if (choice1 == 3)
			{
				point33:cout << "3 паливо : ";
				cin >> a3;
				cout << endl;
				if (c.Zapravka22(a3) == NULL)
				{
					cout << "Ви перевищили об*єм палива!!!!" << endl;
					goto point3;
				}
				t3 = (double)(a3)*c.GetOutput();
				cout << "Time:" << t3 << endl;
				cout << "____________________________________________________________________________________" << endl;
				break;
			}

			if (choice1 == 4)
			{
				point44:cout << "4 паливо : ";
				cin >> a4;
				cout << endl;
				if (c.Zapravka22(a4) == NULL)
				{
					cout << "Ви перевищили об*єм палива!!!!" << endl;
					goto point4;
				}
				t4 = (double)(a4)*c.GetOutput();
				cout << "Time:" << t4 << endl;
				cout << "____________________________________________________________________________________" << endl;
				break;
			}
			continue;

		}

		if (choice == 4)
			break;

	}


	_getch();
	return 0;2
}