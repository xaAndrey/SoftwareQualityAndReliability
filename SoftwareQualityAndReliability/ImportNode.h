#pragma once
#include "AbstractNode.h"

class ImportNode: AbstractNode {

private:
	string name; // имя импорта

public:
	// Конструкторы
	ImportNode();
	ImportNode(string& name);

	// Сеттер
	void setName(string& name);

	// Геттер
	string& getName();

	// Составление xml документа
	list<string>& getXMLView();

	// Составления визуализации виртуального дерева
	list<string> createNodeView();
};

