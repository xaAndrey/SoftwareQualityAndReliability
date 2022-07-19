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

list<string>& ImportNode::findAndDeleteFromStackNode(list<string>& textCode) {	
	auto iterTextCode = textCode.begin(); // ������� ��������, �� ������ ������

	// ��� ���� ��������� ������
	for (; iterTextCode != textCode.end(); iterTextCode++) {
		string sourceStr = *iterTextCode; // ������� ������, � ������� �������� ���������� �������

		// ���� � ������ ���� ������
		if (sourceStr.find("import") != string::npos) {
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

list<string>& ImportNode::getXMLView() {

	// ������� ��������� ������ ����� � ����������� ��� ����������� ��������
	list<string> tmpXMLList = { "<import name =\"" + this->getName() + "\"/>" };

	return tmpXMLList; // ���������� ������ �����

}

list<string> ImportNode::createNodeView() {
	// TODO - �������� ����������
	list<string> tmpViewList;
	return tmpViewList;
}