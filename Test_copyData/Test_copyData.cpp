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
			// ����������
			string sourceWay = "../Test/input1.java";
			list <string> outputArr;

			list <string> expOutputArr;
			expOutputArr = { "" };

			// ���������� 
			copyData(sourceWay, outputArr);

			// ��������
			AssertEqualListString(expOutputArr, outputArr);
		}

		TEST_METHOD(FileHaveOneStrWithOneElement)
		{
			// ����������
			string sourceWay = "../Test/input2.java";
			list <string> outputArr;

			list <string> expOutputArr;
			expOutputArr = { "class" };

			// ���������� 
			copyData(sourceWay, outputArr);

			// ��������
			AssertEqualListString(expOutputArr, outputArr);
		}

		TEST_METHOD(FileHaveSeveralStrWithOneElement)
		{
			// ����������
			string sourceWay = "../Test/input3.java";
			list <string> outputArr;

			list <string> expOutputArr;
			expOutputArr = { "class",
							"Main",
							"{",
							"int",
							"}" };

			// ���������� 
			copyData(sourceWay, outputArr);

			// ��������
			AssertEqualListString(expOutputArr, outputArr);
		}

		TEST_METHOD(FileHaveOneStrWithSeveralElement)
		{
			// ����������
			string sourceWay = "../Test/input4.java";
			list <string> outputArr;

			list <string> expOutputArr;
			expOutputArr = { "class Main { int }" };

			// ���������� 
			copyData(sourceWay, outputArr);

			// ��������
			AssertEqualListString(expOutputArr, outputArr);
		}

		TEST_METHOD(FileHaveSeveralStrWithSeveralElement)
		{
			// ����������
			string sourceWay = "../Test/input5.java";
			list <string> outputArr;

			list <string> expOutputArr;
			expOutputArr = { "class Main {",
							"int main() {",
							"int value = 6;",
							"System.out.println(value);",
							"}}" };

			// ���������� 
			copyData(sourceWay, outputArr);

			// ��������
			AssertEqualListString(expOutputArr, outputArr);
		}

	private:
		void AssertEqualListString(list <string> &expList, list <string> &sourceList)
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
