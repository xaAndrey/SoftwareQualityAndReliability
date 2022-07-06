#pragma once
#include <iostream>
#include <string>

using namespace std;

class FieldNode {

private:
	string accessMode;
	string name;
	string value;

public:
	void setAccessMode(string accessMode);
	void setName(string name);
	void setValue(string value);

	string getAccessMode();
	string getName();
	string getValue();

	string getXMLView();
};

