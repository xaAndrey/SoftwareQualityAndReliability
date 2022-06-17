#include "pch.h"
#include "CppUnitTest.h"
#include "../SoftwareQualityAndReliability/SoftwareQualityAndReliability.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace Microsoft {
	namespace VisualStudio {
		namespace CppUnitTestFramework {

			template<>
			static std::wstring ToString<Import>(const Import& imp) {
				return L"Some string representing coordinate.";
			}

		}
	}
}


namespace TestselectImportsFromTheProgramm
{
	TEST_CLASS(TestselectImportsFromTheProgramm)
	{
	public:
		
		TEST_METHOD(NotImports)
		{
			// Подготовка
			vector<string> sourceCode = { "" };
			Import source;

			Import exp;
			exp.setId(0);
			exp.setName("");

			// Выполнение 
			selectImportsFromTheProgramm(source, sourceCode);

			// Проверка
			Assert::AreEqual(exp, source);
		}
	};
}
/*
	"import java.util.Scanner;",
	"import java.lang.*;",
	"import java.util.*;",
	"interface Test {",
	"int i;",
	"}"

*/