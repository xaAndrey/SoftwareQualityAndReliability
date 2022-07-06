#include "ClassNode.h"

void ClassNode::setName(string& name) {
	this->name = name;
}

void ClassNode::setAccessMode(string& accessMode) {
	this->accessMode = accessMode;
}

void ClassNode::setMethods(list<MethodNode>& methods) {
	this->methods = methods;
}

void ClassNode::setAnnotations(list<AnnotationNode>& annotations) {
	this->annotations = annotations;
}

void ClassNode::setFields(list<FieldNode>& fields) {
	this->fields = fields;
}

string& ClassNode::getName() {
	return this->name;
}

string& ClassNode::getAccessMode() {
	return this->accessMode;
}

list<MethodNode>& ClassNode::getMethods() {
	return this->methods;
}

list<AnnotationNode>& ClassNode::getAnnotations() {
	return this->annotations;
}

list<FieldNode>& ClassNode::getFields() {
	return this->fields;
}

list<string>& ClassNode::getXMLView() {

	list<string> resultXMLView;

	resultXMLView.push_back("<class access_mode = \"" + this->getAccessMode() + "\", name = \"" + this->getName() + "\">\n");

	resultXMLView.push_back("\t<annotations>");

	for (auto iter = this->getAnnotations().begin(); iter != this->getAnnotations().end(); iter++) {

		AnnotationNode tmp = *iter;

		resultXMLView.push_back("\t\t" + tmp.getXMLView());
	}

	resultXMLView.push_back("\t</annotations>");

	resultXMLView.push_back("\t<fields>");

	for (auto iter = this->getFields().begin(); iter != this->getFields().end(); iter++) {

		FieldNode tmp = *iter;

		resultXMLView.push_back("\t\t" + tmp.getXMLView());
	}

	resultXMLView.push_back("\t</fields>");

	resultXMLView.push_back("\t<methods>");

	int indexCount = 1;
	for (auto iter = this->getMethods().begin(); iter != this->getMethods().end(); iter++) {

		MethodNode tmp = *iter;
		list<string> tmpList = tmp.getXMLView();
		for (auto iter = tmpList.begin(); iter != tmpList.end(); iter++) {
			resultXMLView.push_back(*iter);
		}
	}

	resultXMLView.push_back("\t</methods>");
	resultXMLView.push_back("</class>");

	return resultXMLView;
}