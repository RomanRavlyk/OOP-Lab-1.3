#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP  Lab 1.3/VectorN.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 10;
			VectorN vector;
			vector.setN(10);

			Assert::AreEqual(x, vector.getN());
		}
	};
}
