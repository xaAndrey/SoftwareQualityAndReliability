#include "ImportNode.h"

ImportNode::ImportNode() {

}

ImportNode::ImportNode(string& name) {
	this->name = name;
}

void ImportNode::setName(string& name) {
	
	this->name = name;
}

string& ImportNode::getName() {

	return this->name;
}

list<string>& ImportNode::findAndDeleteFromStackNode(list<string>& textCode) {	
	auto iterTextCode = textCode.begin(); // Создаем итератор, на начало списка

	// Для всех элементов списка
	for (; iterTextCode != textCode.end(); iterTextCode++) {
		string sourceStr = *iterTextCode; // Создаем строку, в которую помещаем содержимое проекта

		// Если в строке есть импорт
		if (sourceStr.find("import") != string::npos) {
			int indexStartNameImport = sourceStr.find(' '); // Находим начало имени импорта
			int indexEndNameImport = sourceStr.find(';'); // Находим конец имени импорта
			int lengthImport = indexEndNameImport - indexStartNameImport + 1; // Находим длину имени

			string tmpStr = sourceStr.substr(indexStartNameImport, lengthImport); // Создаем временную строку и помещаем в неё имя импорта
			this->setName(tmpStr); // Устанавливаем имя импорта

			textCode.erase(iterTextCode); // Удаляем строку из текста программы
		}
	}
	return textCode; // Возвращаем список строк
}

list<string>& ImportNode::getXMLView() {

	// Создаем временный список строк и присваиваем ему необходимое значение
	list<string> tmpXMLList = { "<import name =\"" + this->getName() + "\"/>" };

	return tmpXMLList; // Возвращаем список строк

}

list<string> ImportNode::createNodeView() {
	// TODO - добавить реализацию
	list<string> tmpViewList;
	return tmpViewList;
}