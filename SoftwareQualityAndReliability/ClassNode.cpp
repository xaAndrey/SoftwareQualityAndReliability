#include "ClassNode.h"

// SETTERS
void ClassNode::setName(string& name) {
	this->name = name;
}

void ClassNode::setAccessMode(string& accessMode) {
	this->accessMode = accessMode;
}

void ClassNode::setModifier(string& modifier) {
	this->modifier = modifier;
}

void ClassNode::setExtend(string& extend) {
	this->extend = extend;
}

void ClassNode::setImplements(list<string>& implements) {
	this->implements = implements;
}

void ClassNode::setAnnotations(list<AnnotationNode>& annotations) {
	this->annotations = annotations;
}

void ClassNode::setClasses(list<ClassNode>& classes) {
	this->classes = classes;
}

void ClassNode::setInteraces(list<InterfaceNode>& interfaces) {
	this->interfaces = interfaces;
}

void ClassNode::setFields(list<FieldNode>& fields) {
	this->fields = fields;
}

void ClassNode::setConstructors(list<ConstructorNode>& constructors) {
	this->constructors = constructors;
}

void ClassNode::setMethods(list<MethodNode>& methods) {
	this->methods = methods;
}

// GETTERS
string& ClassNode::getName() {
	return this->name;
}

string& ClassNode::getAccessMode() {
	return this->accessMode;
}

string& ClassNode::getModifier() {
	return this->modifier;
}

string& ClassNode::getExtend() {
	return this->extend;
}

list<string>& ClassNode::getImplements() {
	return this->implements;
}

list<AnnotationNode>& ClassNode::getAnnotations() {
	return this->annotations;
}

list<ClassNode>& ClassNode::getClasses() {
	return this->classes;
}

list<InterfaceNode>& ClassNode::getInterfaces() {
	return this->interfaces;
}

list<FieldNode>& ClassNode::getFields() {
	return this->fields;
}

list<ConstructorNode>& ClassNode::getConstructors() {
	return this->constructors;
}

list<MethodNode>& ClassNode::getMethods() {
	return this->methods;
}

list<string>& ClassNode::findAndDeleteFromStackNode(list<string>& textCode) {
	// TODO - добавить реализацию
	return textCode; // Возвращаем список строк
}

list<string>& ClassNode::getXMLView() {

	list<string> resultXMLView;

	resultXMLView.push_back("<class access_mode = \"" + this->getAccessMode() + "\", name = \"" + this->getName() + "\">\n");

	resultXMLView.push_back("\t<annotations>");

	for (auto iter = this->getAnnotations().begin(); iter != this->getAnnotations().end(); iter++) {

		AnnotationNode tmp = *iter;

		list<string> tmpList = tmp.getXMLView();
		auto tmpListIter = tmpList.begin();

		resultXMLView.push_back("\t\t" + *tmpListIter);
	}

	resultXMLView.push_back("\t</annotations>");

	resultXMLView.push_back("\t<fields>");

	for (auto iter = this->getFields().begin(); iter != this->getFields().end(); iter++) {

		FieldNode tmp = *iter;
		list<string> tmpList = tmp.getXMLView();
		auto tmpListIter = tmpList.begin();

		resultXMLView.push_back("\t\t" + *tmpListIter);
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