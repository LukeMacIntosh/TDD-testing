#include "pch.h"
#include "CppUnitTest.h"
#include "Triangle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestCalcHypotenusMethod)
		{
			Triangle t1();
			Assert::AreEqual(t1.CalcHypotenus(t1.sideA, t1.sideB), t1.sideC);
		}
	};
}
