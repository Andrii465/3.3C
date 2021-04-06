#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3C/Money.cpp"
#include "../3.3C/Money.h"
#include "../3.3C/Object.cpp"
#include "../3.3C/Object.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33C
{
	TEST_CLASS(UnitTest33C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money a;
			bool t;
			t = a.Init(1000, 500, 200, 100, 50, 20, 10, 5, 2, 1, 0.50, 0.10);
			Assert::AreEqual(t, true);
		}
	};
}
