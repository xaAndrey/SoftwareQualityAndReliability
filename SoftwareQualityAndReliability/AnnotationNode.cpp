#include "AnnotationNode.h"

void AnnotationNode::setName(string& name) {
	
	this->name = name;
}

string& AnnotationNode::getName() {

	return this->name;
}

list<string>& AnnotationNode::findAndDeleteFromStackNode(list<string>& textCode) {
	// TODO - �������� ����������
	return textCode; // ������� ������ �����
}

list<string>& AnnotationNode::getXMLView() {
	// ������� ��������� ������ ����� � ����������� ��� ����������� ��������
	list<string> tmpXMLList = { "<annotation name = \"@" + this->getName() + "\"/>" };
	return tmpXMLList; // ������� ������ �����
}
