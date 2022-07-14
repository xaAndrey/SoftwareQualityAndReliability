#pragma once
#include "AbstractNode.h"

class PackageNode: AbstractNode{

private:
	string name; // ��� ������

public:
	// ������
	void setName(string& name);

	// ������
	string& getName();

	// ����� � �������� ����� �� ������ ������
	list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	// ����������� XML ������
	list<string>& getXMLView();
};

