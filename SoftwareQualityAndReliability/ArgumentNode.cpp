#include "ArgumentNode.h"

void ArgumentNode::setName(string& name) {
	
	this->name = name;
}

void ArgumentNode::setType(string& type) {
	
	this->type = type;
}

string& ArgumentNode::getName() {

	return this->name;
}

string& ArgumentNode::getType() {

	return this->type;
}

list<string>& findAndDeleteFromStackNode(list<string>& textCode) {
	// TODO - Добавить реализацию
	return textCode;
}

list<string>& ArgumentNode::getXMLView() {
	list<string> tmpXMLList = { "<argument type = \"" + this->getType() +
								"\", name = \"" + this->getName() + "\"/>" };
	return tmpXMLList;
}

list<string> ArgumentNode::createNodeView() {
	// TODO - добавить реализацию
	list<string> tmpViewList;
	return tmpViewList;
}