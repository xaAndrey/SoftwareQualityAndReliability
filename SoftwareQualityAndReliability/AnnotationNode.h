#pragma once
#include <iostream>
#include <list>
#include <string>
#include "AbstractNode.h"

using namespace std;

class AnnotationNode: public AbstractNode {

private:
	string name;

public:
	void setName(string& name);

	string& getName();

	list<string>& getXMLView();
};

