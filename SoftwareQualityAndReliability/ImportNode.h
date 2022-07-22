#pragma once
#include "AbstractNode.h"

class ImportNode: AbstractNode {

private:
	string name; // ��� �������

public:
	// ������������
	ImportNode();
	ImportNode(string& name);

	// ������
	void setName(string& name);

	// ������
	string& getName();

	// ����������� xml ���������
	list<string>& getXMLView();

	// ����������� ������������ ������������ ������
	list<string> createNodeView();
};

