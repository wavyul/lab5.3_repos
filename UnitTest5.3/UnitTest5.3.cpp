#include "pch.h"
#include "CppUnitTest.h"
#include "../LB5.3/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double result = y(1);
            Assert::AreEqual(result, 6.2, 0.1);
        }
    };
}
