#include "ImportNode.h"

void ImportNode::setName(string& name) {
	
	this->name = name;
}

string& ImportNode::getName() {

	return this->name;
}

string ImportNode::getXMLView() {

	return "<import name =\"" + this->getName() + "\"/>"

}
