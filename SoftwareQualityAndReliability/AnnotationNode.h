#pragma once
#include "AbstractNode.h"


class AnnotationNode: AbstractNode {

private:
	string name; // имя аннотации

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

