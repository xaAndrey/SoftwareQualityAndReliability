#pragma once
#include <string>
#include "AbstractNode.h"

using namespace std;

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

