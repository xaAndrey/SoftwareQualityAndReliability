#include "FieldNode.h"

void FieldNode::setAccessMode(string accessMode) {
	
	this->accessMode = accessMode;
}

void FieldNode::setName(string name) {

	this->name = name;
}
void FieldNode::setValue(string value) {

	this->value = value;
}

string FieldNode::getAccessMode() {

	return this->accessMode;
}
string FieldNode::getName() {

	return this->name;
}
string FieldNode::getValue() {

	return this->value;
}

string FieldNode::getXMLView() {

	return ("<field accessMode =\"" + this->getAccessMode() + "\", name = \"" + this->getName() + "\", value = \"" + this->getValue() + "\"/>");
}