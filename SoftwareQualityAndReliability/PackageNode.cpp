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

list<string>& PackageNode::getXMLView() {
	// Создаем временный список строк и присваиваем ему необходимое значение
	list<string> tmpXMLList = { "<package name =\"" + this->getName() + "\"/>" };

	return tmpXMLList; // Возвращаем список строк
}

list<string> FieldNode::createNodeView() {
	list<string> tmpViewList = { this->getName() }; // Создаем список с именем импорта
	return tmpViewList;
}