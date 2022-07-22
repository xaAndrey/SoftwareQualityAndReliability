#pragma once
#include "AbstractNode.h"

class ClassNode: public AbstractNode {

private:
	string name; //��� ������
	string accessMode; // ����������� ������� ������
	string modifier; // ����������� ������
	string extend; // ���������� ������
	list<string> implements; // ������ ����������� ����������� ������
	list<AnnotationNode> annotations; // ������ ��������� ������
	list<ClassNode> classes; // ������ ������� ������
	list<InterfaceNode> interfaces; // ������ ����������� ������
	list<FieldNode> fields; // ������ ����� ������
	list<MethodNode> methods; // ������ ������� ������ 

public:
	// Setters
	void setName(string& name);
	void setAccessMode(string& accessMode);
	void setModifier(string& modifier);
	void setExtend(string& extend);
	void setImplements(list<string>& implements);
	void setAnnotations(list<AnnotationNode>& annotations);
	void setClasses(list<ClassNode>& classes);
	void setInteraces(list<InterfaceNode>& interfaces);
	void setFields(list<FieldNode>& fields);
	void setMethods(list<MethodNode>& methods);

	// Getters
	string& getName();
	string& getAccessMode();
	string& getModifier();
	string& getExtend();
	list<string>& getImplements();
	list<AnnotationNode>& getAnnotations();
	list<ClassNode>& getClasses();
	list<InterfaceNode>& getInterfaces();
	list<FieldNode>& getFields();
	list<MethodNode>& getMethods();

	// TODO �������� ���������� ������ ������ ���� ������ ����

	// ����������� xml ���������
	list<string>& getXMLView();

	// ����������� ������������ ������������ ������
	list<string> createNodeView();
};

