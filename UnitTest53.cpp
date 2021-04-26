#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab5.3/A.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			A a(1);
			Assert::AreEqual(a.getX(), 1);		
		}
	};
}
