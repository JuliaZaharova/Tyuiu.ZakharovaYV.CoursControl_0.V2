#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZakharovaYV.CoursControl_0.V2.Lib/Tyuiu.ZakharovaYV.CoursControl_0.V2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
			//Init
		{
			ISprint0Task8V2* date = new Service();

			int x = 0;
			int y = 2;
			int z = 0;
			int r;

			//run 
			r = date ->Rezultat(x, y, z);

			//Valid
			Assert::AreEqual(1,r);
		}
	};
}
