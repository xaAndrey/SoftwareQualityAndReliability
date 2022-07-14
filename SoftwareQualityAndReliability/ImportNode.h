#pragma once
#include "AbstractNode.h"

class ImportNode: AbstractNode {

private:
	string name; // ��� �������

public:
	// ������
	void setName(string& name);

	// ������
	string& getName();

	// ����� � �������� ����� �� ������ ������
	list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	// ����������� xml ���������
	list<string>& getXMLView();
};

