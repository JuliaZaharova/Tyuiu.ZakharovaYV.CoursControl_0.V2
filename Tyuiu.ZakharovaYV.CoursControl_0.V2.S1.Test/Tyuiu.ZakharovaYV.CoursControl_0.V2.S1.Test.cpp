#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZakharovaYV.CoursControl_0.V2.S1.Lib/Tyuiu.ZakharovaYV.CoursControl_0.V2.S1.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuZakharovaYVCoursControl0V2S1Test
{
	TEST_CLASS(TyuiuZakharovaYVCoursControl0V2S1Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V1* date = new Service0();
			float x = 1;
			float z = 1;
			float y;
			y = date->Chislo(x, z);
			int f;
			f = int(y);
			Assert::AreEqual(0, f);
		}
	};
}
