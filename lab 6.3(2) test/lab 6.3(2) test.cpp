#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab632test
{
	TEST_CLASS(lab632test)
	{
	public:
		
        TEST_METHOD(TestMethod1)
        {
            int c;
            int a[] = { 1, -2, 3, -4, 5 };
            int size = 5;
            c = (a, size);
            Assert::AreEqual(c, 5);
        }
    };
}
