#include "AnnotationNode.h"

void AnnotationNode::setName(string& name) {
	
	this->name = name;
}

string& AnnotationNode::getName() {

	return this->name;
}

string AnnotationNode::getXMLView() {

	return ("<annotation name = \"@" + this->getName() + "\"/>");
}
