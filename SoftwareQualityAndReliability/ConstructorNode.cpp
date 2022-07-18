#include "ConstructorNode.h"

void ConstructorNode::setAccessMode(string& accessMode) {
	this->accessMode = accessMode;
}

void ConstructorNode::setName(string& name) {
	this->name = name;
}

void ConstructorNode::setAnnotations(list<AnnotationNode>& annotations) {
	this->annotattions = annotations;
}

void ConstructorNode::setArguments(list<ArgumentNode>& arguments) {
	this->arguments = arguments;
}

void ConstructorNode::setBodyStr(list<string>& bosyStr) {
	this->bodyStr = bodyStr;
}

string& ConstructorNode::getAccessMode() {
	return this->accessMode;
}

list<AnnotationNode>& ConstructorNode::getAnnotations() {
	return this->annotattions;
}

list<ArgumentNode>& ConstructorNode::getArguments() {
	return this->arguments;
}

list<string>& ConstructorNode::getBodyStr() {
	return this->bodyStr;
}

list<string>& ConstructorNode::findAndDeleteFromStackNode(list<string>& textCode) {
	// TODO - добавить реализацию
	return textCode; // Возвращаем список строк
}

list<string>& ConstructorNode::getXMLView() {

	// Создаем временный список строк и присваиваем ему необходимое значение
	list<string> tmpXMLList = { "" };

	return tmpXMLList; // Возвращаем список строк

}

list<string> ConstructorNode::createNodeView() {
	// TODO - добавить реализацию
	list<string> tmpViewList;
	return tmpViewList;
}