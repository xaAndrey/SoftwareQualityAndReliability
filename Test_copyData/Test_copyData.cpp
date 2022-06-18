#include "pch.h"
#include "CppUnitTest.h"
#include "../SoftwareQualityAndReliability/SoftwareQualityAndReliability.h"
#include <iostream>
#include <string>
#include <list>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace TestcopyData
{
	TEST_CLASS(TestcopyData)
	{
	public:

		TEST_METHOD(EmptyFile)
		{
			// Подготовка
			string sourceWay = "C:\\Users\\andre\\source\\SoftwareQualityAndReliability\\Test_copyData\\Test\\input1.java";
			vector <string> outputArr;

			vector <string> expOutputArr;
			expOutputArr = { };

			// Выполнение 
			outputArr = copyData(sourceWay);

			// Проверка
			AssertEqualListString(expOutputArr, outputArr);
		}

		TEST_METHOD(FileHaveOneStrWithOneElement)
		{
			// Подготовка
			string sourceWay = "C:\\Users\\andre\\source\\SoftwareQualityAndReliability\\Test_copyData\\Test\\input2.java";
			vector <string> outputArr;

			vector <string> expOutputArr;
			expOutputArr = { "class" };

			// Выполнение 
			outputArr = copyData(sourceWay);

			// Проверка
			AssertEqualListString(expOutputArr, outputArr);
		}

		TEST_METHOD(FileHaveSeveralStrWithOneElement)
		{
			// Подготовка
			string sourceWay = "C:\\Users\\andre\\source\\SoftwareQualityAndReliability\\Test_copyData\\Test\\input3.java";
			vector <string> outputArr;

			vector <string> expOutputArr;
			expOutputArr = { "class",
							"Main",
							"{",
							"int",
							"}" };

			// Выполнение 
			outputArr = copyData(sourceWay);

			// Проверка
			AssertEqualListString(expOutputArr, outputArr);
		}

		TEST_METHOD(FileHaveOneStrWithSeveralElement)
		{
			// Подготовка
			string sourceWay = "C:\\Users\\andre\\source\\SoftwareQualityAndReliability\\Test_copyData\\Test\\input4.java";
			vector <string> outputArr;

			vector <string> expOutputArr;
			expOutputArr = { "class Main { int }" };

			// Выполнение 
			outputArr = copyData(sourceWay);

			// Проверка
			AssertEqualListString(expOutputArr, outputArr);
		}

		TEST_METHOD(FileHaveSeveralStrWithSeveralElement)
		{
			// Подготовка
			string sourceWay = "C:\\Users\\andre\\source\\SoftwareQualityAndReliability\\Test_copyData\\Test\\input5.java";
			vector <string> outputArr;

			vector <string> expOutputArr;
			expOutputArr = { "class Main {",
							"int main() {",
							"int value = 6;",
							"System.out.println(value);",
							"}}" };

			// Выполнение 
			outputArr = copyData(sourceWay);

			// Проверка
			AssertEqualListString(expOutputArr, outputArr);
		}

	private:
		void AssertEqualListString(vector <string> &expList, vector <string> &sourceList)
		{
			Assert::AreEqual(expList.size(), sourceList.size());

			auto sourceIter = sourceList.begin();

		    for (auto expIter = expList.begin(); expIter != expList.end(); expIter++)
			{
				Assert::AreEqual(*expIter, *sourceIter);
				sourceIter++;
			}
		}
	};
}
