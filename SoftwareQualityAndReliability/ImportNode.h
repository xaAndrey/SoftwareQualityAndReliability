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

	// Поиск и удаление узлов из общего текста
	list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	// Составление xml документа
	list<string>& getXMLView();
};

