// Tyuiu.ZakharovaYV.CoursControl_0.V2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include <math.h>
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: This is an example of a library function
class Service : public ISprint0Task8V2
{
	virtual int Rezultat(int x, int y, int z) override
	{
		int r;
		r= (x + y - z) / (x * x + 2);
		return r;

	}



};
