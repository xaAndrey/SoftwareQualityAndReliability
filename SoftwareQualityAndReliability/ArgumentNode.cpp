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

list<string>& ArgumentNode::findAndDeleteFromStackNode(list<string>& textCode) {
	string sourceStr = *textCode.begin();
	int indexStartType = 0;
	int indexEndType = sourceStr.find(' ');
	int lengthType = indexEndType - indexStartType + 1;
	string tmpStr = sourceStr.substr(indexStartType, lengthType);
	this->setType(tmpStr);

	int indexStartName = indexEndType + 1;
	int indexEndName = sourceStr.find(',', indexStartName);
	if (indexEndName == string::npos) {
		indexEndName = sourceStr.find(')', indexStartName);
	}
	int lengthName = indexEndName - indexStartName + 1;
	tmpStr.clear();
	tmpStr = sourceStr.substr(indexStartName, lengthName);
	this->setName(tmpStr);

	return textCode;
}

list<string>& ArgumentNode::getXMLView() {
	list<string> tmpXMLList = { "<argument type = \"" + this->getType() +
								"\", name = \"" + this->getName() + "\"/>" };
	return tmpXMLList;
}

list<string> ArgumentNode::createNodeView() {
	// TODO - добавить реализацию
	list<string> tmpViewList;
	return tmpViewList;
}