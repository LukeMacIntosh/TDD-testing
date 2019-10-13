#include "pch.h"
#include "CppUnitTest.h"
#include "Triangle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestCalcHypotenusMethodValid)
		{
			Triangle t1 = {};
			t1.sideA = 4;
			t1.sideB = 3;
			Assert::AreEqual(t1.CalcHypotenus(t1.sideA, t1.sideB), 5);
		}

		TEST_METHOD(TestCalcHypotenusMethodInValid)
		{
			Triangle t2 = {};
			t2.sideA = -4;
			t2.sideB = -3;
			Assert::AreEqual(t2.CalcHypotenus(t2.sideA, t2.sideB), 0);
		}

	};
}