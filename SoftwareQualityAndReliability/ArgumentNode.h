#pragma once
#include "AbstractNode.h"

class ArgumentNode: AbstractNode {

private:
	string name; // Имя аргумента
	string type; // Тип значения аргумента

public:
	// setters
	void setName(string& name);
	void setType(string& type);

	// getters
	string& getName();
	string& getType();

	// Составление xml документа
	list<string>& getXMLView();

	// Составления визуализации виртуального дерева
	list<string> createNodeView();
};

