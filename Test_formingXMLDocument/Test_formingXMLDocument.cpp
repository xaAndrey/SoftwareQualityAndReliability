#include "pch.h"
#include "CppUnitTest.h"
#include "../SoftwareQualityAndReliability/SoftwareQualityAndReliability.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestformingXMLDocument
{
	TEST_CLASS(TestformingXMLDocument)
	{
	public:
		
		TEST_METHOD(OnlyClass)
		{
			// Подготовка
			Class source;
			source.setId(1);
			source.setName("Main");
			source.setAccessMode("public");
			source.setCountMethod(0);
			source.setCountBodyStr(3);
			source.setBodyStr("int index;");
			source.setBodyStr("String str;");
			source.setBodyStr("float f;");
			source.setMethods("");
			source.setAnnotations("Annotations");

			list<Method> methodList;
			list<Import> importList;
			list<Interface> interfaceList;
			list<Class> classList;

			list<string> sourceList;

			list<string> expList;
			expList = { "<?xml version=\"1.0\" encoding=\"UTF - 8\"?>",
					"<imports>",
					"</import>",
					"<interfaces>",
					"</interfaces>",
					"<classes>",
					"	<class access Mode = \"public\", name = \"Main\">",
					"		<annotations>",
					"			<annotation name = \"Annotations\"",
					"		</annotations>",
					"		<body>",
					"			<string index = \"1\", text = \"int index;\"/>",
					"			<string index = \"2\", text = \"String str;\"/>",
					"			<string index = \"3\", text = \"float f;\"/>",
					"		</body>",
					"	</class>",
					"</classes>"
					};

			// Выполнение
			sourceList = formingXMLDocument(classList, methodList, importList, interfaceList);

			// Проверка
			AssertEqualListString(expList, sourceList);
		}

	private:
		void AssertEqualListString(list <string>& expList, list <string>& sourceList)
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
