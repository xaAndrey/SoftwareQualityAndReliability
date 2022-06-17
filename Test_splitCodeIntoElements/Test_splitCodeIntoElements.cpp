#include "pch.h"
#include "CppUnitTest.h"
#include "../SoftwareQualityAndReliability/SoftwareQualityAndReliability.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestsplitCodeIntoElements
{
	TEST_CLASS(TestsplitCodeIntoElements)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Подготовка
			vector<string> sourceCode = { "" };
			list<Method> methodList;
			list<Import> importList;
			list<Interface> interfaceList;
			list<Class> classList;

			list<Method> expMethodList;
			list<Import> expImportList;
			list<Interface> expInterfaceList;
			list<Class> expClassList;



			// Выполнение
			splitCodeIntoElements(classList, methodList, importList, interfaceList, sourceCode);

			// Проверка
			AssertEqualListMethod(methodList, expMethodList);
			AssertEqualListImport(importList, expImportList);
			AssertEqualListInterface(interfaceList, expInterfaceList);
			AssertEqualListClass(classList, expClassList);
		}
		
	private:
		void AssertEqualListMethod(list <Method>& expList, list <Method>& sourceList)
		{
			Assert::AreEqual(expList.size(), sourceList.size());

			auto sourceIter = sourceList.begin();

			for (auto expIter = expList.begin(); expIter != expList.end(); expIter++)
			{
				Assert::AreEqual(*expIter, *sourceIter);
				sourceIter++;
			}
		}

		void AssertEqualListImport(list <Import>& expList, list <Import>& sourceList)
		{
			Assert::AreEqual(expList.size(), sourceList.size());

			auto sourceIter = sourceList.begin();

			for (auto expIter = expList.begin(); expIter != expList.end(); expIter++)
			{
				Assert::AreEqual(*expIter, *sourceIter);
				sourceIter++;
			}
		}

		void AssertEqualListInterface(list <Interface>& expList, list <Interface>& sourceList)
		{
			Assert::AreEqual(expList.size(), sourceList.size());

			auto sourceIter = sourceList.begin();

			for (auto expIter = expList.begin(); expIter != expList.end(); expIter++)
			{
				Assert::AreEqual(*expIter, *sourceIter);
				sourceIter++;
			}
		}

		void AssertEqualListClass(list <Class>& expList, list <Class>& sourceList)
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
