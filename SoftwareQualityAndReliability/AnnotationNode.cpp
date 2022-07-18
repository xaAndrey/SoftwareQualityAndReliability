#include "AnnotationNode.h"

void AnnotationNode::setName(string& name) {
	
	this->name = name;
}

string& AnnotationNode::getName() {

	return this->name;
}

list<string>& AnnotationNode::findAndDeleteFromStackNode(list<string>& textCode) {
	auto iterTextCode = textCode.begin(); // Создаем итератор, на начало списка
	const regex r("@*"); // Создаем регулярное выражение
	smatch smc; // Создаем "smatch"

	// Для всех элементов списка
	for (; iterTextCode != textCode.end(); iterTextCode++) {

		string sourceStr = *iterTextCode; // Создаем строку, в которую помещаем содержимое проекта
		
		// Если в строке есть подстрока, которая соответствует регулярному варажению
		if (regex_search(sourceStr, smc, r)) {

			int indexSymbolAnnotation = sourceStr.find("@"); // Создаем индекс символа, в котором содержится символ начала аннотации
			string subStr = sourceStr.substr(indexSymbolAnnotation + 1); // Создаем строку, в которой копируем все, что нахолится прсое символа начала аннотации
			int indexSymbolTextConstant = sourceStr.find("\""); // Создаем индекс символа, в котором содержится символ начала строковой константы

			// Если строковая контакт есть в тексте и символ начала аннотации находится раньше начала строковой константы
			if ((indexSymbolTextConstant != string::npos) && (indexSymbolAnnotation < indexSymbolTextConstant)) {
				this->setName(subStr); // Определяем имя аннотации
				textCode.erase(iterTextCode); // Удаляем строку из текста программы
			}
			// Иначе
			else {
				this->setName(subStr); // Опредялем имя аннотации 
				textCode.erase(iterTextCode); // Удаляем строку из текста программы 
			}
		}
	}
	return textCode; // Вернуть список строк
}

list<string>& AnnotationNode::getXMLView() {
	// Создаем временный список строк и присваиваем ему необходимое значение
	list<string> tmpXMLList = { "<annotation name = \"@" + this->getName() + "\"/>" };
	return tmpXMLList; // Вернуть список строк
}

list<string> AnnotationNode::createNodeView() {
	// TODO - добавить реализацию
	list<string> tmpViewList;
	return tmpViewList;
}
