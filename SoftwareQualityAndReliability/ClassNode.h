#pragma once
#pragma once
#include <iostream>
#include <list>
#include <string>
#include "AbstractNode.h"
#include "AnnotationNode.h"
#include "MethodNode.h"
#include "FieldNode.h"

using namespace std;

class ClassNode: public AbstractNode {

private:
	string name;
	string accessMode;
	list<MethodNode> methods;
	list<AnnotationNode> annotations;
	list<FieldNode> fields;

public:
	void setName(string& name);
	void setAccessMode(string& accessMode);
	void setMethods(list<MethodNode>& methods);
	void setAnnotations(list<AnnotationNode>& annotations);
	void setFields(list<FieldNode>& fields);

	string& getName();
	string& getAccessMode();
	list<MethodNode>& getMethods();
	list<AnnotationNode>& getAnnotations();
	list<FieldNode>& getFields();

	list<string>& getXMLView();
};

