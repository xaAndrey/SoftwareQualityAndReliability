#include "ImportNode.h"

void ImportNode::setName(string& name) {
	
	this->name = name;
}

string& ImportNode::getName() {

	return this->name;
}

list<string>& ImportNode::findAndDeleteFromStackNode(list<string>& textCode) {

	return textCode; // ���������� ������ �����
}

list<string>& ImportNode::getXMLView() {

	// ������� ��������� ������ ����� � ����������� ��� ����������� ��������
	list<string> tmpXMLList = { "<import name =\"" + this->getName() + "\"/>" };

	return tmpXMLList; // ���������� ������ �����

}