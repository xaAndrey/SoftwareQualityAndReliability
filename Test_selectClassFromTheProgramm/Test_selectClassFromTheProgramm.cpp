#include "pch.h"
#include "CppUnitTest.h"
#include "../SoftwareQualityAndReliability/SoftwareQualityAndReliability.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace Microsoft {
	namespace VisualStudio {
		namespace CppUnitTestFramework {

			template<>
			static std::wstring ToString<Class>(const Class& eClass) {
				return L"Some string representing coordinate.";
			}

		}
	}
}


namespace TestselectClassFromTheProgramm
{
	TEST_CLASS(TestselectClassFromTheProgramm)
	{
	public:
		
  		TEST_METHOD(NotClass)
		{
			// Подготовка
			vector<string> sourceCode = { "" };
			Class source;

			Class exp;
			vector<string> expVector = { "" };
			exp.setId(0);
			exp.setName("");
			exp.setAccessMode("");
			exp.setCountMethod(0);
			exp.setCountBodyStr(0);
			exp.setMethods("");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnotations("");

			// Выполнение
			selectClassFromTheProgramm(source, sourceCode);

			// Проверка 
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleClass)
		{
			// Подготовка
			vector<string> sourceCode = { "import java.util.Scanner;",
											"import java.lang.*;",
											"class Main {};" };
			Class source;

			Class exp;
			vector<string> expVector = { "" };
			exp.setId(1);
			exp.setName("Main");
			exp.setAccessMode("");
			exp.setCountMethod(0);
			exp.setCountBodyStr(0);
			exp.setMethods("");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnotations("");

			// Выполнение
			selectClassFromTheProgramm(source, sourceCode);

			// Проверка 
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleClassWithAccessMode)
		{
			// Подготовка
			vector<string> sourceCode = { "import java.util.Scanner;",
											"import java.lang.*;",
											"public class Main {};" };
			Class source;

			Class exp;
			vector<string> expVector = { "" };
			exp.setId(1);
			exp.setName("Main");
			exp.setAccessMode("public");
			exp.setCountMethod(0);
			exp.setCountBodyStr(0);
			exp.setMethods("");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnotations("");

			// Выполнение
			selectClassFromTheProgramm(source, sourceCode);

			// Проверка 
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleClassWithOneSimpleLine)
		{
			// Подготовка
			vector<string> sourceCode = { "import java.util.Scanner;",
											"import java.lang.*;",
											"class Main {",
											"int index;",
											"};" };
			Class source;

			Class exp;
			vector<string> expVector = { "int index;" };
			exp.setId(1);
			exp.setName("Main");
			exp.setAccessMode("");
			exp.setCountMethod(0);
			exp.setCountBodyStr(1);
			exp.setMethods("");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnotations("");

			// Выполнение
			selectClassFromTheProgramm(source, sourceCode);

			// Проверка 
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleClassWithThreeSimpleLine)
		{
			// Подготовка
			vector<string> sourceCode = { "import java.util.Scanner;",
											"import java.lang.*;",
											"class Main {",
											"int index;",
											"String str;",
											"float f;",
											"};" };
			Class source;

			Class exp;
			vector<string> expVector = { "int index;",
											"String str;",
											"float f;" };
			exp.setId(1);
			exp.setName("Main");
			exp.setAccessMode("");
			exp.setCountMethod(0);
			exp.setCountBodyStr(3);
			exp.setMethods("");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnotations("");

			// Выполнение
			selectClassFromTheProgramm(source, sourceCode);

			// Проверка 
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleClassWithFiveSimpleLine)
		{
			// Подготовка
			vector<string> sourceCode = { "import java.util.Scanner;",
											"import java.lang.*;",
											"class Main {",
											"int index;",
											"String str;",
											"float f;",
											"double lengt;",
											"String h;",
											"};" };
			Class source;

			Class exp;
			vector<string> expVector = { "int index;",
											"String str;",
											"float f;",
											"double lengt;",
											"String h;" };
			exp.setId(1);
			exp.setName("Main");
			exp.setAccessMode("");
			exp.setCountMethod(0);
			exp.setCountBodyStr(5);
			exp.setMethods("");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnotations("");

			// Выполнение
			selectClassFromTheProgramm(source, sourceCode);

			// Проверка 
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleClassWithOneMethod)
		{
			// Подготовка
			vector<string> sourceCode = { "import java.util.Scanner;",
											"import java.lang.*;",
											"class Main {",
											"public static int main() {",
											"Scanner scanner = new Scanner(System.in);",
											"}",
											"};" };
			Class source;

			Class exp;
			vector<string> expVector = { "public static int main() {",
											"Scanner scanner = new Scanner(System.in);",
											"}" };
			exp.setId(1);
			exp.setName("Main");
			exp.setAccessMode("");
			exp.setCountMethod(1);
			exp.setCountBodyStr(3);
			exp.setMethods("main");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnotations("");

			// Выполнение
			selectClassFromTheProgramm(source, sourceCode);

			// Проверка 
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleClassWithTwoMethod)
		{
			// Подготовка
			vector<string> sourceCode = { "import java.util.Scanner;",
											"import java.lang.*;",
											"class Main {",
											"public static int main() {",
											"Scanner scanner = new Scanner(System.in);",
											"}",
											"public void setLength() {",
											"int i = 0;",
											"}",
											"};" };
			Class source;

			Class exp;
			vector<string> expVector = { "public static int main() {",
											"Scanner scanner = new Scanner(System.in);",
											"}",
											"public void setLength() {",
											"int i = 0;",
											"}" };
			exp.setId(1);
			exp.setName("Main");
			exp.setAccessMode("");
			exp.setCountMethod(2);
			exp.setCountBodyStr(6);
			exp.setMethods("main");
			exp.setMethods("setLength");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnotations("");

			// Выполнение
			selectClassFromTheProgramm(source, sourceCode);

			// Проверка 
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleClassWithOneAnnotations)
		{
			// Подготовка
			vector<string> sourceCode = { "import java.util.Scanner;",
											"import java.lang.*;",
											"@Annotation",
											"class Main {",
											"public static int main() {",
											"Scanner scanner = new Scanner(System.in);",
											"}",
											"};" };
			Class source;

			Class exp;
			vector<string> expVector = { "public static int main() {",
											"Scanner scanner = new Scanner(System.in);",
											"}" };
			exp.setId(1);
			exp.setName("Main");
			exp.setAccessMode("");
			exp.setCountMethod(1);
			exp.setCountBodyStr(3);
			exp.setMethods("main");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnotations("Annotation");

			// Выполнение
			selectClassFromTheProgramm(source, sourceCode);

			// Проверка 
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleClassWithTwoAnnotations)
		{
			// Подготовка
			vector<string> sourceCode = { "import java.util.Scanner;",
											"import java.lang.*;",
											"@Annotation1",
											"@Annotation2",
											"class Main {",
											"public static int main() {",
											"Scanner scanner = new Scanner(System.in);",
											"}",
											"};" };
			Class source;

			Class exp;
			vector<string> expVector = { "public static int main() {",
											"Scanner scanner = new Scanner(System.in);",
											"}" };
			exp.setId(1);
			exp.setName("Main");
			exp.setAccessMode("");
			exp.setCountMethod(1);
			exp.setCountBodyStr(3);
			exp.setMethods("main");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnotations("Annotation1");
			exp.setAnnotations("Annotation2");

			// Выполнение
			selectClassFromTheProgramm(source, sourceCode);

			// Проверка 
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(ComplexTest1FullClass)
		{
			// Подготовка
			vector<string> sourceCode = { "import java.util.Scanner;",
											"import java.lang.*;",
											"@Annotation",
											"public class Main {",
											"public static int main() {",
											"Scanner scanner = new Scanner(System.in);",
											"}",
											"};"};
			Class source;

			Class exp;
			vector<string> expVector = { "public static int main() {",
											"Scanner scanner = new Scanner(System.in);",
											"}" };
			exp.setId(1);
			exp.setName("Main");
			exp.setAccessMode("public");
			exp.setCountMethod(1);
			exp.setCountBodyStr(3);
			exp.setMethods("main");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnotations("Annotation");

			// Выполнение
			selectClassFromTheProgramm(source, sourceCode);

			// Проверка 
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(ComplexTest2FullMethod)
		{
			// Подготовка
			vector<string> sourceCode = { "import java.util.Scanner;",
											"import java.lang.*;",
											"public class Main {",
											"@AnnotationMethod",
											"public static int main(String[] args, int argv) {",
											"Scanner scanner = new Scanner(System.in);",
											"}",
											"};" };
			Class source;

			Class exp;
			vector<string> expVector = { "@AnnotationMethod",
											"public static int main(String[] args, int argv) {",
											"Scanner scanner = new Scanner(System.in);",
											"}" };
			exp.setId(1);
			exp.setName("Main");
			exp.setAccessMode("public");
			exp.setCountMethod(1);
			exp.setCountBodyStr(4);
			exp.setMethods("main");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnotations("");

			// Выполнение
			selectClassFromTheProgramm(source, sourceCode);

			// Проверка 
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(ComplexTest3FullAll)
		{
			// Подготовка
			vector<string> sourceCode = { "import java.util.Scanner;",
											"import java.lang.*;",
											"@AnnotationClass",
											"public class Main {",
											"int m;",
											"@AnnotationMethod",
											"public static int main(String[] args, int argv) {",
											"Scanner scanner = new Scanner(System.in);",
											"}",
											"public void setLength() {",
											"int i = 0;",
											"}",
											"};" };
			Class source;

			Class exp;
			vector<string> expVector = { "int m;",
											"@AnnotationMethod",
											"public static int main(String[] args, int argv) {",
											"Scanner scanner = new Scanner(System.in);",
											"}",
											"public void setLength() {",
											"int i = 0;",
											"}" };
			exp.setId(1);
			exp.setName("Main");
			exp.setAccessMode("public");
			exp.setCountMethod(2);
			exp.setCountBodyStr(8);
			exp.setMethods("main");
			exp.setMethods("setLength");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnotations("AnnotationClass");

			// Выполнение
			selectClassFromTheProgramm(source, sourceCode);

			// Проверка 
			Assert::AreEqual(exp, source);
		}
	};
}
