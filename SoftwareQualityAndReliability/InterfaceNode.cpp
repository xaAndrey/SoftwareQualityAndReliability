#include "InterfaceNode.h"

void InterfaceNode::setName(string& name) {
	this->name = name;
}

void InterfaceNode::setExtend(string& extend) {
	this->extend = extend;
}

void InterfaceNode::setAnnotations(list<AnnotationNode>& annotations) {
	this->annotations = annotations;
}

void InterfaceNode::setFields(list<FieldNode>& fields) {
	this->fields = fields;
}

void InterfaceNode::setMethods(list<MethodNode>& methods) {
	this->methods = methods;
}

string& InterfaceNode::getName() {
	return this->name;
}

string& InterfaceNode::getExtend() {
	return this->extend;
}

list<AnnotationNode>& InterfaceNode::getAnnotations() {
	return this->annotations;
}

list<FieldNode>& InterfaceNode::getFields() {
	return this->fields;
}

list<MethodNode>& InterfaceNode::getMethods() {
	return this->methods;
}

list<string>& InterfaceNode::findAndDeleteFromStackNode(list<string>& textCode) {
	// TODO - Добавить реализацию
	return textCode; // Вернуть список строк
}

list<string>& InterfaceNode::getXMLView() {
	// TODO - Добавить реализацию
	// Создаем временный список строк и присваиваем ему необходимое значение
	list<string> tmpXMLList = { "" };
	return tmpXMLList; // Вернуть список строк
}

list<string> InterfaceNode::createNodeView() {
	// TODO - добавить реализацию
	list<string> tmpViewList;
	return tmpViewList;
}