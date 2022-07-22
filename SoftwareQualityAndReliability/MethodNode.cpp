#include "MethodNode.h"

void MethodNode::setName(string& name) {

	this->name = name;
}

void MethodNode::setAccessMode(string& accessMode) {

	this->accessMode = accessMode;
}

void MethodNode::setModifier(string& modifier) {

	this->modifier = modifier;
}

void MethodNode::setType(string& type) {

	this->type = type;
}

void MethodNode::setBodyStr(list<string>& bodyStr) {

	this->bodyStr = bodyStr;
}

void MethodNode::setAnnotations(list<AnnotationNode>& annotations) {

	this->annotations = annotations;
}

void MethodNode::setArguments(list<ArgumentNode> arguments) {

	this->arguments = arguments;
}


string& MethodNode::getName() {

	return this->name;
}

string& MethodNode::getAccessMode() {
	
	return this->accessMode;
}

string& MethodNode::getModifier() {

	return this->modifier;
}

string& MethodNode::getType() {

	return this->type;
}

list<string>& MethodNode::getBodyStr() {

	return this->bodyStr;
}

list<AnnotationNode>& MethodNode::getAnnotations() {

	return this->annotations;
}

list<ArgumentNode>& MethodNode::getArguments() {

	return this->arguments;
}

// TODO написать реализацию метода поиска узла внутри тела

list<string>& MethodNode::getXMLView() {

	list<string> resultXMLView;

	resultXMLView.push_back("<method access_mode = \"" + this->getAccessMode() + 
		"\", modifier = \"" + this->getModifier() + "\", type_value = \"" + this->getType() + 
		"\", name = \"" + this->getName() + "\">\n");

	resultXMLView.push_back("\t<annotations>");

	for (auto iter = this->getAnnotations().begin(); iter != this->getAnnotations().end(); iter++) {
		
		AnnotationNode tmp = *iter;

		resultXMLView.push_back("\t\t" + tmp.getXMLView());
	}

	resultXMLView.push_back("\t</annotations>");

	resultXMLView.push_back("\t<arguments>");

	for (auto iter = this->getArguments().begin(); iter != this->getArguments().end(); iter++) {

		ArgumentNode tmp = *iter;

		resultXMLView.push_back("\t\t" + tmp.getXMLView());
	}

	resultXMLView.push_back("\t</arguments>");

	resultXMLView.push_back("\t<body>");

	int indexCount = 1;
	for (auto iter = this->getBodyStr().begin(); iter != this->getBodyStr().end(); iter++) {
		
		string tmp = *iter;
		resultXMLView.push_back("\t\t<string id = \"" + to_string(indexCount) + "\", text = \"" + tmp);
		indexCount++;
	}

	resultXMLView.push_back("\t</body>");
	resultXMLView.push_back("</method>");

	return resultXMLView;
}

list<string> MethodNode::createNodeView() {
	// TODO - добавить реализацию
	list<string> tmpViewList;
	return tmpViewList;
}