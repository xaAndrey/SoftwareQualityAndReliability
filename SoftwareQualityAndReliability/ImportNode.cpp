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

list<string>& ImportNode::getXMLView() {

	// Создаем временный список строк и присваиваем ему необходимое значение
	list<string> tmpXMLList = { "<import name =\"" + this->getName() + "\"/>" };

	return tmpXMLList; // Возвращаем список строк

}

list<string> ImportNode::createNodeView() {
	// TODO - добавить реализацию
	list<string> tmpViewList = { this->getName() }; // Создаем список с именем импорта
	return tmpViewList;
}