#pragma once
#include <string>
#include "AbstractNode.h"

using namespace std;

class ImportNode: AbstractNode {

private:
	string name; // имя импорта

public:
	// Сеттер
	void setName(string& name);

	// Геттер
	string& getName();

	// Поиск и удаление узлов из общего текста
	list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	// Составление xml документа
	list<string>& getXMLView();
};

