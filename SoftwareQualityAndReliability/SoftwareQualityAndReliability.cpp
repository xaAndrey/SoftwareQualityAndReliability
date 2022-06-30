#include "SoftwareQualityAndReliability.h"

int main()
{
	//vector<string> tmp;
	//

	//string line = "C:\\Users\\andre\\source\\SoftwareQualityAndReliability\\test.txt";
	//tmp = copyData(line);

	//for (auto iter = tmp.begin(); iter != tmp.end(); iter++)
	//{
	//	cout << *iter << endl;
	//}

	//list<Import> liTmp;
	//selectImportsFromTheProgramm(liTmp, tmp);

	//list<Interface> liInt;
	//selectInterfaceFromTheProgramm(liInt, tmp);

	//list<Method> liM;
	//selectMethodFromTheProgramm(liM, tmp);
	// Вводим данные с консоли
	{
		// Если начальной дирректории не существует
		{
			// Выводим в консоль сообщение об ошибке
		}

		// Если конечная дирректория не существует
		{
			// Выводим в консоль сообщение об ошибке
		}
	}

	// Для всех файлов дирректории с раширением .java
	{
		// Копируем содержимое файла в массив строк
		//copyData();

		// Разбираем файл по основным структурам
		//splitCodeIntoElements();

		// Формируем xml документ из разоранных структур
		//formingXMLDocumnt();
	}
}

// +
vector<string> copyData(string& sourceWay)
{
	//// Открыть поток + создать указатель
	//vector<string> resultCode;
	//string strCode;
	//ifstream sourceCode;
	//sourceCode.open(sourceWay);

	//if (sourceCode.is_open())
	//{
	//	// Для каждой строки, содеражащийся в файле
	//	while (getline(sourceCode, strCode))
	//	{
	//		// Скопировать строку в массив строк
	//		resultCode.push_back(strCode);
	//	}
	//}

	//// Закрыть поток
	//sourceCode.close();

	//return resultCode;
}

// -
void splitCodeIntoElements(list<Class>& sourceClasses, list<Import>& sourceImports, list<Interface>& sourceInterfaces, vector<string>& sourceCode)
{
	// Проверяем на наличие import, если они есть
	{
	}

	// Проверяем на наличие классов, если они есть
	{
	}

	// Проверяем на наличие интерфейсов
	{
	}

}

// -
list <string> formingXMLDocument(list<Class>& listClass, list<Method>& listMethods, list<Import>& listImports, list<Interface>& listInterfaces)
{
	// Заглушка
	list <string> testList = { "<?xml version=\"1.0\" encoding=\"UTF - 8\"?>",
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

	return testList;

	// Создаём файл с названием входного файла и расширением xml

	// Для всех классов
	{

		// Если есть ошибка в названии класса
		{
			// Выписываем в общий выходной файл информацию об ошибке в тег warnings
		}
		// Иначе
		{
			// Создаем файл с именем класса и расширением xml

			// Вставляем ссылку в общий выходной файл с именем класса и файлом, в котором находится его реализация

			// В файл самого класса выписываем режим доступа класса и его имя

			// В файл самого класса выписываем массив аннготаций, если они есть

			// Для каждой строки тела
			{
				// Если строка тела является методом и его реализацией
				{
					// Если есть ошибка в объявлении метода
					{
						// Выписываем в файл метода инфорамцию об ошибке в тег wanings
					}

					// Создаем файл с методом, его именем и расширением xml

					// Вставляем в файл класса имя метода и с названием файла метода

					// В файл самого метода выписываем информацию о методе

					// Для каждой строки тела метода
					{
						// Выписываем номер строки по порядку и её содержание
					}
				}
				// Иначе
				{
					// Выписываем номер строки по порядку и её содержание
				}
			}
		}
	}
}

// +
void selectImportsFromTheProgramm(list<Import>& importSource, vector<string>& sourceCode)
{
	/*
	// Заглушка
	importSource.setId(0);
	importSource.setName("");
	*/
	//int countImport = 0;

	//for (int i = 0; i < sourceCode.size(); i++)
	//{
	//	int start = sourceCode[i].find("import") != -1 ? sourceCode[i].find("import") : -1;

	//	if (start != -1)
	//	{
	//		countImport++;
	//		int end = sourceCode[i].rfind(";");
	//		Import tmpImport;
	//		int count = end - (start + 7);
	//		string tmpString(sourceCode[i], start + 7, count);
	//		tmpImport.setId(countImport);
	//		tmpImport.setName(tmpString);
	//		importSource.push_back(tmpImport);
	//	}
	//}

	//for (auto iter = importSource.begin(); iter != importSource.end(); iter++)
	//{
	//	Import i = *iter;
	//	cout << i.getId() << " " << i.getName() << endl;
	//}

	// Для каждого import
	{
		// Создаем экземпляр import и сохраняем 

		// Если у импорта есть аннотация
		{
			// Сохранить в массив аннотаций аннотацию
		}
	}
}

// -
void selectClassFromTheProgramm(Class& elementClass, vector<string>& sourceCode)
{
	// Заглушка 
	sourceCode = { "" };

	elementClass.setId(0);
	elementClass.setName("");
	elementClass.setAccessMode("");
	elementClass.setCountMethod(0);
	elementClass.setCountBodyStr(0);
	elementClass.setMethods("");
	for (int i = 0; i < sourceCode.size(); i++)
	{
		elementClass.setBodyStr(sourceCode[i]);
	}
	elementClass.setAnnotations("");

	// Обнуляем счётчик классов

	// Для каждого класса
	{
		// Создаем экземпляр класса

		// Определяем модификатор доступа класса

		// Если допущена ошибка модификатора доступа
		{
			// Создать файл с названием входного файла

			// Вывести в выходной файл сообщение об ошибки
		}

		// Определяем имя класса

		// Если допущена ошибка в имени класса
		{
			// Создать файл с названием входного файла
		}

		// Если у класса есть аннотация
		{
			// Сохранить в массив аннотаций аннотацию
		}

		// Определяем начало и конец тела класса

		// Обнуляем кол-во методов в классе

		// Для всех строк тела класса
		{
			// Если строка является методом класса
			{
			}
		}
	}

}

// +
void selectInterfaceFromTheProgramm(list<Interface>& interfaceSource, vector <string>& sourceCode)
{
	/*
	// Заглушка
	sourceVector = { "" };
	interface.setId(0);
	interface.setName("");
	for (int i = 0; i < sourceVector.size(); i++)
	{
		interface.setBodyStr(sourceVector[i]);
	}
	*/
	//bool isEnd = false;
	//int countInterface = 0;

	//for (int i = 0; i < sourceCode.size(); i++)
	//{
	//	int start = sourceCode[i].find("interface") != -1 ? sourceCode[i].find("interface") : -1;

	//	if (start != -1)
	//	{
	//		countInterface++;
	//		int end = sourceCode[i].rfind("{");
	//		Interface tmpInterface;
	//		int count = end - (start + 10);
	//		string tmpString(sourceCode[i], start + 10, count);
	//		tmpInterface.setId(countInterface);
	//		tmpInterface.setName(tmpString);

	//		if (sourceCode[i].find("}") != -1)
	//		{
	//			isEnd = true;
	//		}

	//		for (int j = 1; !isEnd; j++)
	//		{
	//			if (sourceCode[i + j].find("}") != -1)
	//			{
	//				isEnd = true;
	//			}
	//			else
	//			{
	//				tmpInterface.setBodyStr(sourceCode[i + j]);
	//			}
	//		}

	//		interfaceSource.push_back(tmpInterface);
	//	}
	//}

	//for (auto iter = interfaceSource.begin(); iter != interfaceSource.end(); iter++)
	//{
	//	Interface i = *iter;
	//	cout << i.getId() << " " << i.getName() << endl;
	//	list <string> tmpStr = i.getBodyStr();
	//	for (auto inter = tmpStr.begin(); inter != tmpStr.end(); inter++)
	//	{
	//		cout << *inter << endl;
	//	}
	//}

	// Обнуляем счётчик интерфейсов

	// Для каждого interface
	{
		// Создаем экземпляр interface и сохраняем содержание

		// Если у интерфейса есть аннотация
		{
			// Сохранить в массив аннотаций аннотацию
		}
	}

}

// -
void selectMethodFromTheProgramm(list<Method>& methodSource, vector <string>& sourceCode)
{
	/*
	// Заглушка
	sourceCode = { "" };
	method.setId(0);
	method.setName("");
	method.setAccessMode("");
	method.setModifier("");
	method.setTypeValue("");
	method.setArguments("", "");
	for (int i = 0; i < sourceCode.size(); i++)
	{
		method.setBodyStr(sourceCode[i]);
	}
	method.setAnnatations("");
	*/

	//bool isCode = true;
	//bool isMethod = false;
	//bool isEnd = false;
	//bool hasAccessMode = false;
	//bool hasModifayer = false;
	//int indexOpeningBracket = -1;
	//int countMethod = 0;
	//int indexClosingBracket = -1;
	//int counterOpeningBrackets = 0;
	//int indexStrStartMethods = -1;
	//int indexStrEndMethods = -1;
	//int startNameMethod = -1;
	//int endNameMethod = -1;
	//int startAccessMode = -1;
	//int countChar = 0;

	//for (int j = 0; j < sourceCode.size(); j++)
	//{
	//	for (int i = 0; i < sourceCode[j].size() && !isEnd; i++)
	//	{
	//		// если символ == ( и мы находемся в коде и метод не найден
	//		if (sourceCode[j][i] == '(' && isCode && !isMethod)
	//		{
	//			// то если перед символом буква или число
	//			if ((sourceCode[j][i - 1] >= 'A' && sourceCode[j][i - 1] <= 'Z') || 
	//				(sourceCode[j][i - 1] >= 'a' && sourceCode[j][i - 1] <= 'z') || 
	//				(sourceCode[j][i - 1] >= '0' && sourceCode[j][i - 1] <= '9'))
	//			{
	//				//запоминаем индекс символа (
	//				indexOpeningBracket = i;
	//			}
	//		}
	//		//если символ == ) и индекс ( известен и мы находемся в коде и метод не найден
	//		if (sourceCode[j][i] == ')' && indexOpeningBracket != -1 && isCode && !isMethod)
	//		{
	//			// то запоминаем индекс символа )
	//			indexClosingBracket = i;
	//		}
	//		//если символ == { и метод не найден и мы находемся в коде
	//		if (sourceCode[j][i] == '{' && !isMethod && isCode)
	//		{
	//			// то отмечаем, что метод найден
	//			isMethod = true;
	//			// запоминаем индекс начала метода
	//			indexStrStartMethods = j;
	//			// увеличиваем счётчик методов на 1
	//			countMethod++;
	//		}
	//		//если символ == { и метод найден и мы находемся в коде
	//		if (sourceCode[j][i] == '{' && isMethod && isCode)
	//		{
	//			// то увеличиваем счётчик открывающих строк на 1 
	//			counterOpeningBrackets++;
	//		}
	//		//если символ == " и мы находемся в коде
	//		if (sourceCode[j][i] == '\"' && isCode)
	//		{
	//			// то отмечаем, что находимся не в коде
	//			isCode = false;
	//		}
	//		//если символ == " и мы находимся не в коде
	//		if (sourceCode[j][i] == '\"' && !isCode)
	//		{
	//			// то отмечаем, что мы находимся в коде
	//			isCode = true;
	//		}
	//		//если символ == } и мы находимся в коде и метод найден и счётчик открывающихся строк != 0
	//		if (sourceCode[j][i] == '}' && isCode && isMethod && counterOpeningBrackets)
	//		{
	//			// то уменьшаем счётчик открывающихся строк на 1
	//			counterOpeningBrackets--;
	//		}
	//		// если символ == } и мы находимся в коде и метод найден и счётчик открывающихся строк == 0
	//		if (sourceCode[j][i] == '}' && isCode && isMethod && !counterOpeningBrackets)
	//		{
	//			// отмечаем, что метод закончился
	//			isEnd = true;
	//			// запоминаем индекс конца метода
	//			indexStrEndMethods = j;
	//		}
	//	}

	//	if (isEnd)
	//	{
	//		string methodHeader = sourceCode[indexStrStartMethods];

	//		Method methodInstance;
	//		methodInstance.setId(countMethod);
	//		
	//		if (methodHeader.find("public") != -1 && methodHeader.find("public") < indexOpeningBracket)
	//		{
	//			methodInstance.setAccessMode("public");
	//			hasAccessMode = true;
	//			startAccessMode = methodHeader.find("public") + 7;
	//		}
	//		else if (methodHeader.find("private") != -1 && methodHeader.find("private") < indexOpeningBracket)
	//		{
	//			methodInstance.setAccessMode("private");
	//			hasAccessMode = true;
	//			startAccessMode = methodHeader.find("private") + 8;
	//		}
	//		else if (methodHeader.find("protected") != -1 && methodHeader.find("protected") < indexOpeningBracket)
	//		{
	//			methodInstance.setAccessMode("protected");
	//			hasAccessMode = true;
	//			startAccessMode = methodHeader.find("protected") + 9;

	//		}
	//		else
	//		{
	//			methodInstance.setAccessMode("public");
	//			hasAccessMode = false;
	//		}

	//		if (methodHeader.find("static") != -1 && methodHeader.find("static") < indexOpeningBracket)
	//		{
	//			methodInstance.setModifier("static");
	//			hasModifayer = true;
	//		}
	//		else
	//		{
	//			methodInstance.setModifier("");
	//			hasModifayer = false;
	//		}

	//		if (hasModifayer)
	//		{
	//			startNameMethod = methodHeader.find(" ", methodHeader.find("static") + 7);
	//		}
	//		else if (!hasModifayer && hasAccessMode)
	//		{
	//			startNameMethod = methodHeader.find(" ", startAccessMode);
	//		}
	//		else if (!hasAccessMode && !hasModifayer)
	//		{
	//			startNameMethod = methodHeader.find(" ");
	//		}

	//		endNameMethod = methodHeader.find(" ", startNameMethod + 1);
	//		countChar = endNameMethod - startNameMethod;
	//		string tmp(methodHeader, countChar, startNameMethod);
	//		
	//		methodInstance.setName(tmp);

	//		if (indexOpeningBracket + 1 != indexClosingBracket)
	//		{
	//			countChar = methodHeader.find(" ") - indexOpeningBracket;
	//			string tmpTypeValue(methodHeader, countChar, indexOpeningBracket + 1);
	//			countChar = methodHeader.find(",") - methodHeader.find(" ");
	//			string tmpName(methodHeader, countChar, methodHeader.find(" "));
	//			methodInstance.setArguments(tmpName, tmpTypeValue);
	//		}
	//	}
	//}
	

	// Увличиваем счетчик методов класса на один

	// Создать экземпляр метода

	// Определяем модификатор доступа метода

	// Если допущена ошибка модификатора доступа
	{
		// Вывести в выходной файл ошибку с информацией об ошибке
	}

	// Определяем модификатор метода

	// Определяем тип возвращающего значение метода

	// Если допущена ошибка в типе возвращающего значения
	{
		// Вывести в выходной файл ошибку с информацией об ошибке
	}

	// Определить имя метода

	// Если в имени метода допущена ошибка
	{
		// Вывести в исходный файл ошибку синформацией об ошибке
	}

	// Для всех аргументов объявленных в методе
	{
		// Создать экземпляр аргумента

		// Сохранить в массив аргументов

		// Определить тип аргумента

		// Определить имя аргумента

		// Если у аргумента есть аннотация
		{
			// Сохранить в массиве аннотаций
		}
	}

	// Если у метода есть аннотация
	{
		// Сохранить в массиве аннтоаций
	}

	// Посчитать строки в теле


}