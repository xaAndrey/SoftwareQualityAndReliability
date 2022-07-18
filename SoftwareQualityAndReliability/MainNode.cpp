#include "MainNode.h"

// SETTERS
void MainNode::setImports(list<ImportNode>& imports) {
	this->imports = imports;
}

void MainNode::setPackages(list<PackageNode>& packages) {
	this->packages = packages;
}

void MainNode::setInterfaces(list<InterfaceNode>& interfaces) {
	this->interfaces = interfaces;
}

void MainNode::setClasses(list<ClassNode>& classes) {
	this->classes = classes;
}

// GETTERS
list<ImportNode> MainNode::getImports() {
	return this->imports;
}

list<PackageNode> MainNode::getPackages() {
	return this->packages;
}

list<InterfaceNode> MainNode::getInterfaces() {
	return this->interfaces;
}

list<ClassNode> MainNode::getClasses() {
	return this->classes;
}

// ����� � �������� ����� �� ������ ������
list<string>& ImportNode::findAndDeleteFromStackNode(list<string>& textCode) {
	// TODO - �������� ����������
	return textCode; // ���������� ������ �����
}

// ����������� xml ���������
list<string>& ImportNode::getXMLView() {

	// TODO - �������� ����������
	// ������� ��������� ������ ����� � ����������� ��� ����������� ��������
	list<string> tmpXMLList = { "" };

	return tmpXMLList; // ���������� ������ �����

}

list<string> MainNode::createNodeView() {
	// TODO - �������� ����������
	list<string> tmpViewList;
	return tmpViewList;
}