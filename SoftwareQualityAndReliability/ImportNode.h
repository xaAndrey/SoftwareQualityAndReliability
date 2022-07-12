#pragma once
#include <string>

using namespace std;

class ImportNode {

private:
	string name;

public:
	void setName(string& name);

	string& getName();

	string getXMLView();
};

