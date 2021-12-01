#include "pch.h"
#include "CppUnitTest.h"
#include "../PR13.1/dod.cpp"
#include "../PR13.1/dod.h"
#include "../PR13.1/sum.h"
#include "../PR13.1/var.h"
#include "../PR13.1/sum.cpp"
#include "../PR13.1/var.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT131
{
	TEST_CLASS(UT131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			n = 1;
			x = 1;
			a = 1;
			nsDod::dod();

			Assert::IsTrue(a == -1);
		}
	};
}