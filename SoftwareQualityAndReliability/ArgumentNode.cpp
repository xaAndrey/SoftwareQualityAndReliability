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

list<string> ArgumentNode::getXMLView()
{
	list<string> resultXMLView;

	resultXMLView.push_back("<argument type = \"" + this->getType() + "\", name = \"" + this->getName() + "\"/>");

	return resultXMLView;
}