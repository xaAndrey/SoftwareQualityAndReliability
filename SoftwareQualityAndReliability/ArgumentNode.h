#pragma once
#include "AbstractNode.h"

class ArgumentNode: AbstractNode {

private:
	string name; // ��� ���������
	string type; // ��� �������� ���������

public:
	// setters
	void setName(string& name);
	void setType(string& type);

	// getters
	string& getName();
	string& getType();

	// ����������� xml ���������
	list<string>& getXMLView();

	// ����������� ������������ ������������ ������
	list<string> createNodeView();
};

