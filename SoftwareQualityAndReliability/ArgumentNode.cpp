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

string ArgumentNode::getXMLView()
{
	return ("<argument type = \"" + this->getType() + "\", name = \"" + this->getName() + "\"/>");
}