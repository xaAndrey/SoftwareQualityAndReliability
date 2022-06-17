#include "pch.h"
#include "CppUnitTest.h"
#include "../SoftwareQualityAndReliability/SoftwareQualityAndReliability.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Microsoft {
	namespace VisualStudio {
		namespace CppUnitTestFramework {

			template<>
			static std::wstring ToString<Method>(const Method& meth) {
				return L"Some string representing coordinate.";
			}

		}
	}
}

namespace TestselectMethodFromTheProgramm
{
	TEST_CLASS(TestselectMethodFromTheProgramm)
	{
	public:
		TEST_METHOD(NotMethod)
		{
			// ����������
			vector <string> sourceCode = { "class Main {",
										"int id;",
										"String name",
										"};" };
			Method source;

			Method exp;
			vector <string> expVector = { "" };
			exp.setId(0);
			exp.setName("");
			exp.setAccessMode("");
			exp.setModifier("");
			exp.setTypeValue("");
			exp.setArguments("", "");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnatations("");

			// ���������� 
			selectMethodFromTheProgramm(source, sourceCode);

			// ��������
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleMethodWithOneBodyLine)
		{
			// ���������� 
			vector <string> sourceCode = { "class Main {",
											"int main() {",
											"int i;",
											"}",
											"String name",
											"};"};
			Method source;
			Method exp;
			vector <string> expVector = { "int i;" };
			exp.setId(1);
			exp.setName("main");
			exp.setAccessMode("");
			exp.setModifier("");
			exp.setTypeValue("int");
			exp.setArguments("", "");
			for (int i = 0; i < expVector.size(); i++) 
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnatations("");

			// ����������
			selectMethodFromTheProgramm(source, sourceCode);

			// ��������
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleMethodWithThreeBodyLine)
		{
			// ���������� 
			vector <string> sourceCode = { "class Main {",
											"int main() {",
											"int i;",
											"String y;",
											"boolean flag;",
											"}",
											"String name",
											"};"};

			Method source;
			Method exp;
			vector <string> expVector = { "int i;",
											"String y;",
											"boolean flag;" };
			exp.setId(1);
			exp.setName("main");
			exp.setAccessMode("");
			exp.setModifier("");
			exp.setTypeValue("int");
			exp.setArguments("", "");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnatations("");

			// ����������
			selectMethodFromTheProgramm(source, sourceCode);

			// ��������
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleMethodWithFiveBodyLine)
		{
			// ���������� 
			vector <string> sourceCode = { "class Main {",
											"int main() {",
											"int i;",
											"String y;",
											"boolean flag;",
											"int l;",
											"int r;",
											"}",
											"String name",
											"};"};
			Method source;
			Method exp;
			vector <string> expVector = { "int i;",
											"String y;",
											"boolean flag;",
											"int l;",
											"int r;" };
			exp.setId(1);
			exp.setName("main");
			exp.setAccessMode("");
			exp.setModifier("");
			exp.setTypeValue("int");
			exp.setArguments("","");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnatations("");

			// ����������
			selectMethodFromTheProgramm(source, sourceCode);

			// ��������
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleMethodWithOneArguments)
		{
			// ���������� 
			vector <string> sourceCode = { "class Main {",
											"int main(int l) {",
											"int i;",
											"}",
											"String name",
											"};"};
			Method source;
			Method exp;
			vector <string> expVector = { "int i;" };
			exp.setId(1);
			exp.setName("main");
			exp.setAccessMode("");
			exp.setModifier("");
			exp.setTypeValue("int");
			exp.setArguments("i", "int");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnatations("");

			// ����������
			selectMethodFromTheProgramm(source, sourceCode);

			// ��������
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleMethodWithSeveralArguments)
		{
			// ���������� 
			vector <string> sourceCode = { "class Main {",
											"int main(int l, String i, boolean s) {",
											"int i;",
											"}",
											"String name",
											"};"};
			Method source;
			Method exp;
			vector <string> expVector = { "int i;" };
			exp.setId(1);
			exp.setName("main");
			exp.setAccessMode("");
			exp.setModifier("");
			exp.setTypeValue("int");
			exp.setArguments("l", "int");
			exp.setArguments("i", "String");
			exp.setArguments("s", "boolean");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnatations("");

			// ����������
			selectMethodFromTheProgramm(source, sourceCode);

			// ��������
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneMiddleMethod)
		{
			// ���������� 
			vector <string> sourceCode = { "class Main {",
											"public int main() {",
											"int i;",
											"}",
											"String name",
											"};"};
			Method source;
			Method exp;
			vector <string> expVector = { "int i;" };
			exp.setId(1);
			exp.setName("main");
			exp.setAccessMode("public");
			exp.setModifier("");
			exp.setTypeValue("int");
			exp.setArguments("", "");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnatations("");

			// ����������
			selectMethodFromTheProgramm(source, sourceCode);

			// ��������
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneMiddleMethodWithOneArguments)
		{
			// ���������� 
			vector <string> sourceCode = { "class Main {",
											"public int main(int l) {",
											"int i;",
											"}",
											"String name",
											"};"};
			Method source;
			Method exp;
			vector <string> expVector = { "int i;" };
			exp.setId(1);
			exp.setName("main");
			exp.setAccessMode("public");
			exp.setModifier("");
			exp.setTypeValue("int");
			exp.setArguments("i", "int");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnatations("");

			// ����������
			selectMethodFromTheProgramm(source, sourceCode);

			// ��������
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneMiddleMethodWitSeveralArguments)
		{
			// ���������� 
			vector <string> sourceCode = { "class Main {",
											"public int main(int l, String i, boolean s) {",
											"int i;",
											"}",
											"String name",
											"};"};
			Method source;
			Method exp;
			vector <string> expVector = { "int i;" };
			exp.setId(1);
			exp.setName("main");
			exp.setAccessMode("public");
			exp.setModifier("");
			exp.setTypeValue("int");
			exp.setArguments("l", "int");
			exp.setArguments("i", "String");
			exp.setArguments("s", "boolean");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnatations("");

			// ����������
			selectMethodFromTheProgramm(source, sourceCode);

			// ��������
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneMiddleMethodWithOneAnnotations)
		{
			// ���������� 
			vector <string> sourceCode = { "@Annotations",
											"class Main {",
											"public int main() {",
											"int i;",
											"}",
											"String name",
											"};"};

			Method source;
			Method exp;
			vector <string> expVector = { "int i;" };
			exp.setId(1);
			exp.setName("main");
			exp.setAccessMode("public");
			exp.setModifier("");
			exp.setTypeValue("int");
			exp.setArguments("", "");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnatations("Annotations");

			// ����������
			selectMethodFromTheProgramm(source, sourceCode);

			// ��������
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneMiddleMethodWithSeveralAnnotations)
		{
			// ���������� 
			vector <string> sourceCode = { "@Annotations1",
											"@Annotations2",
											"class Main {",
											"public int main() {",
											"int i;",
											"}",
											"String name",
											"};"};

			Method source;
			Method exp;
			vector <string> expVector = { "int i;" };
			exp.setId(1);
			exp.setName("main");
			exp.setAccessMode("public");
			exp.setModifier("");
			exp.setTypeValue("int");
			exp.setArguments("", "");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnatations("Annotations1");
			exp.setAnnatations("Annotations2");

			// ����������
			selectMethodFromTheProgramm(source, sourceCode);

			// ��������
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(OneSimpleMethodWirhModificator)
		{
			// ���������� 
			vector <string> sourceCode = { "class Main {",
											"static int main() {",
											"int i;",
											"}",
											"String name",
											"};"};
			Method source;
			Method exp;
			vector <string> expVector = { "int i;" };
			exp.setId(1);
			exp.setName("main");
			exp.setAccessMode("");
			exp.setModifier("static");
			exp.setTypeValue("int");
			exp.setArguments("", "");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnatations("");

			// ����������
			selectMethodFromTheProgramm(source, sourceCode);

			// ��������
			Assert::AreEqual(exp, source);
		}

		TEST_METHOD(ComplexTest1)
		{
			// ���������� 
			vector <string> sourceCode = { "@Annotations1",
											"@Annotations2",
											"class Main {",
											"public static int main(String[] args, int arg) {",
											"int i;",
											"String l;",
											"boolean flag;",
											"double d;",
											"int y;",
											"}",
											"String name",
											"};"};
			Method source;
			Method exp;
			vector <string> expVector = { "int i;",
											"String l;",
											"boolean flag;",
											"double d;",
											"int y;"};
			exp.setId(1);
			exp.setName("main");
			exp.setAccessMode("public");
			exp.setModifier("static");
			exp.setTypeValue("int");
			exp.setArguments("args", "String[]");
			exp.setArguments("arg", "int");
			for (int i = 0; i < expVector.size(); i++)
			{
				exp.setBodyStr(expVector[i]);
			}
			exp.setAnnatations("Annotations1");
			exp.setAnnatations("Annotations2");

			// ����������
			selectMethodFromTheProgramm(source, sourceCode);

			// ��������
			Assert::AreEqual(exp, source);
		}

		// TODO -- �������� ������ ������ 
		// (�����, ��� �������� ����� ��������� � �������� ������, � ������� � �.�.) 
		// (��������� ��� �� ���� 10 �� �����������)
	};
}
