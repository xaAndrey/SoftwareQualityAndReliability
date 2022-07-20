#include "PackageNode.h"

PackageNode::PackageNode() {

}

PackageNode::PackageNode(string& name) {
	this->name = name;
}

void PackageNode::setName(string& name) {
	this->name = name;
}

string& PackageNode::getName() {
	return this->name;
}

list<string>& PackageNode::findAndDeleteFromStackNode(list<string>& textCode) {
	// TODO - �������� ����������
	auto iterTextCode = textCode.begin(); // ������� ��������, �� ������ ������

	// ��� ���� ��������� ������
	for (; iterTextCode != textCode.end(); iterTextCode++) {
		string sourceStr = *iterTextCode; // ������� ������, � ������� �������� ���������� �������

		// ���� � ������ ���� ������
		if (sourceStr.find("package") != string::npos) {
			int indexStartNameImport = sourceStr.find(' '); // ������� ������ ����� �������
			int indexEndNameImport = sourceStr.find(';'); // ������� ����� ����� �������
			int lengthImport = indexEndNameImport - indexStartNameImport + 1; // ������� ����� �����

			string tmpStr = sourceStr.substr(indexStartNameImport, lengthImport); // ������� ��������� ������ � �������� � �� ��� �������
			this->setName(tmpStr); // ������������� ��� �������

			textCode.erase(iterTextCode); // ������� ������ �� ������ ���������
		}
	}
	return textCode; // ���������� ������ �����
}

list<string>& PackageNode::getXMLView() {
	// ������� ��������� ������ ����� � ����������� ��� ����������� ��������
	list<string> tmpXMLList = { "<package name =\"" + this->getName() + "\"/>" };

	return tmpXMLList; // ���������� ������ �����
}

list<string> FieldNode::createNodeView() {
	// TODO - �������� ����������
	list<string> tmpViewList;
	return tmpViewList;
}