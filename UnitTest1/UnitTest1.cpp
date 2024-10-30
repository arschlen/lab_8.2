#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.2/8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string input = "Hello World";
			string expectedOutput = "hello";
			string actualOutput;
			size_t length = ProcessString(input, actualOutput);

			Assert::AreEqual(expectedOutput, actualOutput);
			Assert::AreEqual(expectedOutput.length(), length);
		}
	};
}
