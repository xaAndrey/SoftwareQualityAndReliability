#pragma once
#include "AbstractNode.h"

class PackageNode: AbstractNode{

private:
	string name; // ��� ������

public:
	// ������������
	PackageNode();
	PackageNode(string& name);

	// ������
	void setName(string& name);

	// ������
	string& getName();

	// ����������� XML ������
	list<string>& getXMLView();

	// ����������� ������������ ������������ ������
	list<string> createNodeView();
};

