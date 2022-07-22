#include "ImportNode.h"

ImportNode::ImportNode() {

}

ImportNode::ImportNode(string& name) {
	this->name = name;
}

void ImportNode::setName(string& name) {
	
	this->name = name;
}

string& ImportNode::getName() {

	return this->name;
}

list<string>& ImportNode::getXMLView() {

	// ������� ��������� ������ ����� � ����������� ��� ����������� ��������
	list<string> tmpXMLList = { "<import name =\"" + this->getName() + "\"/>" };

	return tmpXMLList; // ���������� ������ �����

}

list<string> ImportNode::createNodeView() {
	// TODO - �������� ����������
	list<string> tmpViewList = { this->getName() }; // ������� ������ � ������ �������
	return tmpViewList;
}