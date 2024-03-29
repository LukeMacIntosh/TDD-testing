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

		TEST_METHOD(TestCalcAreaMethodValid)
		{
			Triangle t3 = {};
			t3.sideA = 4;
			t3.sideB = 3;
			Assert::AreEqual(t3.CalcArea(t3.sideA, t3.sideB), 6);
		}

		TEST_METHOD(TestCalcAreaMethodInValid)
		{
			Triangle t4 = {};
			t4.sideA = -4;
			t4.sideB = -3;
			Assert::AreEqual(t4.CalcArea(t4.sideA, t4.sideB), 0);
		}

		TEST_METHOD(TestCalcAngleMethodValid)
		{
			Triangle t5 = {};
			t5.angleA = 60;
			t5.angleB = 40;
			Assert::AreEqual(t5.CalcAngle(t5.angleA, t5.angleB), 80);
		}

		TEST_METHOD(TestCalcAngleMethodInValid)
		{
			Triangle t6 = {};
			t6.angleA = -60;
			t6.angleB = -40;
			Assert::AreEqual(t6.CalcAngle(t6.angleA, t6.angleB), 0); 
		}

	};
}