#include "pch.h"
#include "CppUnitTest.h"
#include "../SoftwareQualityAndReliability/SoftwareQualityAndReliability.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace Microsoft {
	namespace VisualStudio {
		namespace CppUnitTestFramework {

			template<>
			static std::wstring ToString<Interface>(const Interface& inter) {
				return L"Some string representing coordinate.";
			}

		}
	}
}


namespace TestselectInterfaceFromTheProgramm
{
	TEST_CLASS(TestselectInterfaceFromTheProgramm)
	{
	public:
		
		TEST_METHOD(NotInterface)
		{
			// Подготовка
			vector <string> sourceCode = { "class Main {",
											"int id;",
											"String name",
											"};"};
			Interface source;
			Interface exp;
			vector <string> expVector = { "" };
			exp.setId(0);
			exp.setName("");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}

			// Выполнение 
			selectInterfaceFromTheProgramm(source, sourceCode);

			// Проверка
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneInterfaceWithoutBodyLine)
		{
			// Подготовка
			vector <string> sourceCode = { "interface Test {}",
											"class Main {",
											"int id;",
											"String name",
											"};"};
			Interface source;
			Interface exp;
			vector <string> expVector = { "" };
			exp.setId(1);
			exp.setName("Test");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}

			// Выполнение 
			selectInterfaceFromTheProgramm(source, sourceCode);

			// Проверка
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneInterfaceWithOneLine)
		{
			// Подготовка
			vector <string> sourceCode = { "interface Test {",
											"int i;",
											"}",
											"class Main {",
											"int id;",
											"String name",
											"};"};
			Interface source;
			Interface exp;
			vector <string> expVector = { "int i;" };
			exp.setId(1);
			exp.setName("Test");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}

			// Выполнение 
			selectInterfaceFromTheProgramm(source, sourceCode);

			// Проверка
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneInterfaceWithThreeLine)
		{
			// Подготовка
			vector <string> sourceCode = { "interface Test {",
											"int i;",
											"float f",
											"String s",
											"}",
											"class Main {",
											"int id;",
											"String name",
											"};" };
			Interface source;
			Interface exp;
			vector <string> expVector = { "int i;",
											"float f",
											"String s" };
			exp.setId(1);
			exp.setName("Test");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}

			// Выполнение 
			selectInterfaceFromTheProgramm(source, sourceCode);

			// Проверка
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneInterfaceWithFiveLine)
		{
			// Подготовка
			vector <string> sourceCode = { "interface Test {",
											"int i;",
											"float love;",
											"String daria;",
											"double d",
											"int v",
											"}",
											"class Main {",
											"int id;",
											"String name",
											"};" };
			Interface source;
			Interface exp;
			vector <string> expVector = { "int i;",
											"float love;",
											"String daria;",
											"double d",
											"int v" };
			exp.setId(1);
			exp.setName("Test");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}

			// Выполнение 
			selectInterfaceFromTheProgramm(source, sourceCode);

			// Проверка
			Assert::AreEqual(exp, source);
		}
	};
}
