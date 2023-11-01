#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.3(2)/lab 6.3.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestMethod1)
        {
            const int N = 25;
            int a[N]{};
            int Low = -11;
            int High = 13;
            Create(a, N, -11, 13);
            Assert::AreEqual(2, SumOne(a, N), 0.0001);
        }

        TEST_METHOD(TestMethod2)
        {
            const int N = 25;
            int b[N]{};
            int LowTwo = -11;
            int HighTwo = 13;
            Create(b, N, -11, 13);
            Assert::AreEqual(26, SumTwo(b, N), 0.0001);
        }
    };
}
