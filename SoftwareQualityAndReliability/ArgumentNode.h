#pragma once
#include <iostream>
#include <string>

using namespace std;

class ArgumentNode {

private:
	string name;
	string type;

public:
	// setters
	void setName(string& name);
	void setType(string& type);

	// getters
	string& getName();
	string& getType();

	// operators
	bool operator== (const ArgumentNode& other) const;
	bool operator!= (const ArgumentNode& other) const;
};

