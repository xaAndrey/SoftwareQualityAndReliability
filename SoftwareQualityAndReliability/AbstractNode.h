#pragma once
#include <iostream>
#include <list>
#include <string>

using namespace std;

class AbstractNode {

public:
	virtual list<string> getXMLView();
};

