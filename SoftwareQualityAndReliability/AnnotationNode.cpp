#include "AnnotationNode.h"

void AnnotationNode::setName(string& name) {
	
	this->name = name;
}

string& AnnotationNode::getName() {

	return this->name;
}

list<string>& AnnotationNode::findAndDeleteFromStackNode(list<string>& textCode) {
	// TODO - Добавить реализацию
	return textCode; // Вернуть список строк
}

list<string>& AnnotationNode::getXMLView() {
	// Создаем временный список строк и присваиваем ему необходимое значение
	list<string> tmpXMLList = { "<annotation name = \"@" + this->getName() + "\"/>" };
	return tmpXMLList; // Вернуть список строк
}
