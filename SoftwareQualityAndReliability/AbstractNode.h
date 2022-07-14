#pragma once
#include <iostream>
#include <list>
#include <string>

using namespace std;

class AbstractNode {

public:
	//create virrtual TREE
	virtual list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	//crate XML text
	virtual list<string>& getXMLView();
};

