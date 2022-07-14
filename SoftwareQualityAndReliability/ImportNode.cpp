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
	// TODO - добавить реализацию
	return textCode; // Возвращаем список строк
}

list<string>& ImportNode::getXMLView() {

	// Создаем временный список строк и присваиваем ему необходимое значение
	list<string> tmpXMLList = { "<import name =\"" + this->getName() + "\"/>" };

	return tmpXMLList; // Возвращаем список строк

}