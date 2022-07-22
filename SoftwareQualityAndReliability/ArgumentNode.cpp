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

list<string>& ArgumentNode::getXMLView() {
	list<string> tmpXMLList = { "<argument type = \"" + this->getType() +
								"\", name = \"" + this->getName() + "\"/>" };
	return tmpXMLList;
}

list<string> ArgumentNode::createNodeView() {
	list<string> tmpViewList = { "argument - " + this->getName() }; // Создаем список с именем аргумента
	return tmpViewList;
}