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

	// Поиск и удаление узлов из общего текста
	list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	// Состваление XML текста
	list<string>& getXMLView();
};

