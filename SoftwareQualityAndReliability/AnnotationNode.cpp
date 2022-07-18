#include "AnnotationNode.h"

void AnnotationNode::setName(string& name) {
	
	this->name = name;
}

string& AnnotationNode::getName() {

	return this->name;
}

list<string>& AnnotationNode::findAndDeleteFromStackNode(list<string>& textCode) {
	auto iterTextCode = textCode.begin(); // ������� ��������, �� ������ ������
	const regex r("@*"); // ������� ���������� ���������
	smatch smc; // ������� "smatch"

	// ��� ���� ��������� ������
	for (; iterTextCode != textCode.end(); iterTextCode++) {

		string sourceStr = *iterTextCode; // ������� ������, � ������� �������� ���������� �������
		
		// ���� � ������ ���� ���������, ������� ������������� ����������� ���������
		if (regex_search(sourceStr, smc, r)) {

			int indexSymbolAnnotation = sourceStr.find("@"); // ������� ������ �������, � ������� ���������� ������ ������ ���������
			string subStr = sourceStr.substr(indexSymbolAnnotation + 1); // ������� ������, � ������� �������� ���, ��� ��������� ����� ������� ������ ���������
			int indexSymbolTextConstant = sourceStr.find("\""); // ������� ������ �������, � ������� ���������� ������ ������ ��������� ���������

			// ���� ��������� ������� ���� � ������ � ������ ������ ��������� ��������� ������ ������ ��������� ���������
			if ((indexSymbolTextConstant != string::npos) && (indexSymbolAnnotation < indexSymbolTextConstant)) {
				this->setName(subStr); // ���������� ��� ���������
				textCode.erase(iterTextCode); // ������� ������ �� ������ ���������
			}
			// �����
			else {
				this->setName(subStr); // ��������� ��� ��������� 
				textCode.erase(iterTextCode); // ������� ������ �� ������ ��������� 
			}
		}
	}
	return textCode; // ������� ������ �����
}

list<string>& AnnotationNode::getXMLView() {
	// ������� ��������� ������ ����� � ����������� ��� ����������� ��������
	list<string> tmpXMLList = { "<annotation name = \"@" + this->getName() + "\"/>" };
	return tmpXMLList; // ������� ������ �����
}

list<string> AnnotationNode::createNodeView() {
	// TODO - �������� ����������
	list<string> tmpViewList;
	return tmpViewList;
}
