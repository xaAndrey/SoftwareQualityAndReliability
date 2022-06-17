﻿#include "SoftwareQualityAndReliability.h"

int main()
{
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

void copyData(string& sourceWay, list <string> &outputList)
{
	// Заглушка
	outputList= { "" };
	// Открыть поток + создать указатель

	// Для каждой строки, содеражащийся в файле
	{
		// Скопировать строку в массив строк
	}

	// Закрыть поток
}

void splitCodeIntoElements(list<Class>& sourceClasses, list<Method>& sourceMethods, list<Import>& sourceImports, list<Interface>& sourceInterfaces, vector<string>& sourceCode)
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

void selectImportsFromTheProgramm(Import& importSource, vector<string>& sourceCode)
{
	// Заглушка
	importSource.setId(0);
	importSource.setName("");

	// Обнуляем счётчик импортов

	// Для каждого import
	{
		// Создаем экземпляр import и сохраняем содержание

		// Если у импорта есть аннотация
		{
			// Сохранить в массив аннотаций аннотацию
		}
	}

}

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

void selectInterfaceFromTheProgramm(Interface& interface, vector <string>& sourceVector)
{
	// Заглушка
	sourceVector = { "" };
	interface.setId(0);
	interface.setName("");
	for (int i = 0; i < sourceVector.size(); i++)
	{
		interface.setBodyStr(sourceVector[i]);
	}

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

void selectMethodFromTheProgramm(Method &method, vector <string> &sourceVector)
{
	// Заглушка
	sourceVector = { "" };
	method.setId(0);
	method.setName("");
	method.setAccessMode("");
	method.setModifier("");
	method.setTypeValue("");
	method.setArguments("", "");
	for (int i = 0; i < sourceVector.size(); i++)
	{
		method.setBodyStr(sourceVector[i]);
	}
	method.setAnnatations("");

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