#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ConvertNumbers/conv.h"
#include "../ConvertNumbers/conv.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(CorrectNumber1)
		{
			std::string number = "III";
			auto convnumb = convert(number);
			Assert::AreEqual(3, convnumb);
		}
		TEST_METHOD(CorrectNumber2)
		{
			std::string number = "MDCCLXXVI";
			auto convnumb = convert(number);
			Assert::AreEqual(1776, convnumb);
		}
		TEST_METHOD(CorrectNumber3)
		{
			std::string number = "CDXXI";
			auto convnumb = convert(number);
			Assert::AreEqual(421, convnumb);
		}
		TEST_METHOD(CorrectNumber4)
		{
			std::string number = "MMXVIII";
			auto convnumb = convert(number);
			Assert::AreEqual(2018, convnumb);
		}
		TEST_METHOD(IncorrectNumber1)
		{
			std::string number = "";
			auto convnumb = convert(number);
			Assert::AreEqual(0, convnumb);
		}
		TEST_METHOD(IncorrectNumber2)
		{
			std::string number = "asdasdasdasdas";
			auto convnumb = convert(number);
			Assert::AreEqual(0, convnumb);
		}

	};
}