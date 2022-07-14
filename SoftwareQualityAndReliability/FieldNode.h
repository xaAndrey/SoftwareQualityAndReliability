#pragma once
#include "AbstractNode.h"

class FieldNode: AbstractNode {

private:
	string accessMode; // ����������� ������� ����
	string type; // ��� �������� ����
	string name; // ��� ����
	string value; // �������� ����
	list<AnnotationNode> annotations; // ������ ��������� ����

public:
	// �������
	void setAccessMode(string& accessMode);
	void setType(string& type);
	void setName(string& name);
	void setValue(string& value);
	void setAnnotations(list<AnnotationNode>& annotations);
	
	// �������
	string& getAccessMode();
	string& getType();
	string& getName();
	string& getValue();
	list<AnnotationNode>& getAnnotations();

	// ����� � �������� ����� �� ������ ������
	list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	// ����������� xml ���������
	list<string>& getXMLView();
};

