#include "PackageNode.h"

void PackageNode::setName(string& name) {
	this->name = name;
}

string& PackageNode::getName() {
	return this->name;
}

list<string>& PackageNode::findAndDeleteFromStackNode(list<string>& textCode) {
	return textCode; // ������� ������ �����
}

list<string>& PackageNode::getXMLView() {
	// ������� ��������� ������ ����� � ����������� ��� ����������� ��������
	list<string> tmpXMLList = { "<package name =\"" + this->getName() + "\"/>" };

	return tmpXMLList; // ���������� ������ �����
}