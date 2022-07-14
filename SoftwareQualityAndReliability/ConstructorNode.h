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

	// Поиск и удаление узлов из общего текста
	list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	// Составление xml документа
	list<string>& getXMLView();
};

