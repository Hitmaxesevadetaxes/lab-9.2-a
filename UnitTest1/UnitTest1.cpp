#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\HP\source\repos\lab 9.2\lab 9.2\source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 2;
			int y = 6;
			int z = 8;
			 double expected = 100;
			double calculate_w = SQR(MAX(x + y, x + z));
			 Assert::AreEqual(expected, calculate_w);
		}
	};
}
