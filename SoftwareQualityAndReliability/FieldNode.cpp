#include "FieldNode.h"

void FieldNode::setAccessMode(string& accessMode) {
	
	this->accessMode = accessMode;
}

void FieldNode::setType(string& type) {
	this->type = type;
}

void FieldNode::setName(string& name) {

	this->name = name;
}
void FieldNode::setValue(string& value) {

	this->value = value;
}

void FieldNode::setAnnotations(list<AnnotationNode>& annotations) {
	this->annotations = annotations;
}

string& FieldNode::getAccessMode() {

	return this->accessMode;
}

string& FieldNode::getType() {
	return this->type;
}

string& FieldNode::getName() {

	return this->name;
}

string& FieldNode::getValue() {

	return this->value;
}

list<AnnotationNode>& FieldNode::getAnnotations() {
	return this->annotations;
}

list<string>& FieldNode::findAndDeleteFromStackNode(list<string>& textCode) {
	// TODO - добавить реализацию
	return textCode; // Возвращаем список строк
}

list<string>& FieldNode::getXMLView() {

	// Создаем временный список строк и присваиваем ему необходимое значение
	list<string> tmpXMLList = { "<field accessMode =\"" + this->getAccessMode() + "\", name = \"" + 
									this->getName() + "\", value = \"" + this->getValue() + "\"/>" };

	return tmpXMLList; // Возвращаем список строк

}

list<string> FieldNode::createNodeView() {
	// TODO - добавить реализацию
	list<string> tmpViewList;
	return tmpViewList;
}