#include "AnnotationNode.h"

void AnnotationNode::setName(string& name) {
	
	this->name = name;
}

string& AnnotationNode::getName() {

	return this->name;
}

list<string>& AnnotationNode::getXMLView() {

	list<string> resultXMLView;

	resultXMLView.push_back("<annotation name = \"@" + this->getName() + "\"/>");

	return resultXMLView;
}
