#pragma once
#include "AbstractNode.h"

class ConstructorNode: AbstractNode {
private:
	string accessMode;
	string name;
	list<AnnotationNode> annotattions;
	list<ArgumentNode> arguments;
	list<string> bodyStr;

public:
	// Setters
	void setAccessMode(string& accessMode);
	void setName(string& name);
	void setAnnotations(list<AnnotationNode>& annotations);
	void setArguments(list<ArgumentNode>& arguments);
	void setBodyStr(list<string>& bodyStr);

	// Getters
	string& getAccessMode();
	string& getName();
	list<AnnotationNode>& getAnnotations();
	list<ArgumentNode>& getArguments();
	list<string>& getBodyStr();

	// ����� � �������� ����� �� ������ ������
	list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	// ����������� xml ���������
	list<string>& getXMLView();
};

