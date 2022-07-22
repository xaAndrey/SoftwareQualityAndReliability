#pragma once
#include "AbstractNode.h"

class PackageNode: AbstractNode{

private:
	string name; // имя пакета

public:
	// Конструкторы
	PackageNode();
	PackageNode(string& name);

	// Сеттер
	void setName(string& name);

	// Геттер
	string& getName();

	// Состваление XML текста
	list<string>& getXMLView();

	// Составления визуализации виртуального дерева
	list<string> createNodeView();
};

