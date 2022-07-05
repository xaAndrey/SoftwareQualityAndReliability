#pragma once
#include <iostream>
#include <list>
#include <string>
#include "AbstractNode.h"
#include "AnnotationNode.h"
#include "ArgumentNode.h"

using namespace std;

class MethodNode: public AbstractNode {

private:
	string name;
	string accessMode;
	string modifier;
	string type;
	list<string> bodyStr;
	list<AnnotationNode> annotations;
	list<ArgumentNode> arguments;

public:
	void setName(string& name);
	void setAccessMode(string& accessMode);
	void setModifier(string& modifier);
	void setType(string& type);
	void setBodyStr(list<string>& bodyStr);
	void setAnnotations(list<AnnotationNode>& annotations);
	void setArguments(list<ArgumentNode> arguments);

	string& getName();
	string& getAccessMode();
	string& getModifier();
	string& getType();
	list<string>& getBodyStr();
	list<AnnotationNode>& getAnnotations();
	list<ArgumentNode>& getArguments();

	list<string>& getXMLView();

};

