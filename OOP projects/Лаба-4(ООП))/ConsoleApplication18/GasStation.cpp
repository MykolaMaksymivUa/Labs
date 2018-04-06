#include "GasStation.h"
#include <iostream>
namespace P {



	CGasStation::CGasStation()
	{
	}

	void CGasStation::SetOutput(double OUTput)
	{
		output = OUTput;
	}
	
	double CGasStation::GetOutput()
	{
		return output;
	}


	void CGasStation::setV1(int m_V1)
	{
		V1 = m_V1;
	}
	int CGasStation::getV1()
	{
		return V1;
	}

	void CGasStation::setV2(int m_V2)
	{
		V2 = m_V2;
	}

	int CGasStation::getV2()
	{
		return V2;
	}

	void CGasStation::setV3(int m_V3)
	{
		V3 = m_V3;
	}

	int CGasStation::getV3()
	{
		return V3;
	}

	void CGasStation::setV4(int m_V4)
	{
		V4 = m_V4;
	}

	int CGasStation::getV4()
	{
		return V4;
	}
	
	int CGasStation::Zapravka1(int a1)
	{

		if ((P1 + a1) > V1)
		{

			return NULL;
		}
		else
		{
			return PP1 += (P1 + a1);
		}
	}
	int CGasStation::Zapravka11(int a1)
	{

		if (a1>PP1)
		{

			return NULL;
		}
		else
		{
			return PP1 -=a1;
		}
	}


	int CGasStation::Zapravka2(int a2)
	{

		if ((P2 + a2) > V2)
		{
			return NULL;
		}
		else return PP2 += (P2 + a2);
	}

	int CGasStation::Zapravka22(int a2)
	{

		if (a2>PP2)
		{

			return NULL;
		}
		else
		{
			return PP1 -= a2;
		}
	}

	int CGasStation::Zapravka3(int a3)
	{

		if (P3+a3 > V3)
		{

			return NULL;
		}
		else return PP3+=(P3+a3);
	}

	int CGasStation::Zapravka33(int a3)
	{

		if (a3>PP3)
		{

			return NULL;
		}
		else
		{
			return PP3 -= a3;
		}
	}

	int CGasStation::Zapravka4(int a4)
	{

		if (P4 + a4 > V4)
		{
			return NULL;
		}
		else return PP4+= (P4 + a4);
	}

	int CGasStation::Zapravka44(int a4)
	{

		if (a4>PP4)
		{

			return NULL;
		}
		else
		{
			return PP4 -= a4;
		}
	}

	CGasStation::~CGasStation()
	{
	}
}