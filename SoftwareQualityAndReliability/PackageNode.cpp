#include "PackageNode.h"

PackageNode::PackageNode() {

}

PackageNode::PackageNode(string& name) {
	this->name = name;
}

void PackageNode::setName(string& name) {
	this->name = name;
}

string& PackageNode::getName() {
	return this->name;
}

list<string>& PackageNode::findAndDeleteFromStackNode(list<string>& textCode) {
	// TODO - Добавить реализацию
	auto iterTextCode = textCode.begin(); // Создаем итератор, на начало списка

	// Для всех элементов списка
	for (; iterTextCode != textCode.end(); iterTextCode++) {
		string sourceStr = *iterTextCode; // Создаем строку, в которую помещаем содержимое проекта

		// Если в строке есть импорт
		if (sourceStr.find("package") != string::npos) {
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

list<string>& PackageNode::getXMLView() {
	// Создаем временный список строк и присваиваем ему необходимое значение
	list<string> tmpXMLList = { "<package name =\"" + this->getName() + "\"/>" };

	return tmpXMLList; // Возвращаем список строк
}

list<string> FieldNode::createNodeView() {
	// TODO - добавить реализацию
	list<string> tmpViewList;
	return tmpViewList;
}