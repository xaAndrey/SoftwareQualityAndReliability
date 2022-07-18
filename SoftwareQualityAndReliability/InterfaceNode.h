#pragma once
#include "AbstractNode.h"

class InterfaceNode: AbstractNode {
private:
	string name; // ��� ����������
	string extend; // ��� ������������
	list<AnnotationNode> annotations; // ������ ���������
	list<FieldNode> fields; // ������ �����
	list<MethodNode> methods; // ������ �������

public:
	// �������
	void setName(string& name);
	void setExtend(string& extend); 
	void setAnnotations(list<AnnotationNode>& annotastions);
	void setFields(list<FieldNode>& fields);
	void setMethods(list<MethodNode>& methods);

	// �������
	string& getName();
	string& getExtend();
	list<AnnotationNode>& getAnnotations();
	list<FieldNode>& getFields();
	list<MethodNode>& getMethods();

	// ����� � �������� ����� �� ������ ������
	list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	// ����������� xml ���������
	list<string>& getXMLView();

	// ����������� ������������ ������������ ������
	list<string> createNodeView();
};

