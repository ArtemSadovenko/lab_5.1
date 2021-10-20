#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test51
{
	TEST_CLASS(test51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = g(0.0, 0.0);
			Assert::AreEqual(t, 1.0);
		}
	};
}
