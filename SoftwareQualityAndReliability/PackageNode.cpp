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
	return textCode; // Вернуть список строк
}

list<string>& PackageNode::getXMLView() {
	// Создаем временный список строк и присваиваем ему необходимое значение
	list<string> tmpXMLList = { "<package name =\"" + this->getName() + "\"/>" };

	return tmpXMLList; // Возвращаем список строк
}