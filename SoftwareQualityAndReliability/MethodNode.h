#pragma once
#include "AbstractNode.h"

class MethodNode: public AbstractNode {

private:
	string name; // Имя метода
	string accessMode; // Модификатор доступа метода
	string modifier; // Модификатор метода
	string type; // Тип метода
	list<string> bodyStr; // Строки тела метода
	list<AnnotationNode> annotations; // Список аннотаций метода
	list<ArgumentNode> arguments; // Список аргументов метода

public:
	// Сеттеры
	void setName(string& name);
	void setAccessMode(string& accessMode);
	void setModifier(string& modifier);
	void setType(string& type);
	void setBodyStr(list<string>& bodyStr);
	void setAnnotations(list<AnnotationNode>& annotations);
	void setArguments(list<ArgumentNode> arguments);

	// Геттеры
	string& getName();
	string& getAccessMode();
	string& getModifier();
	string& getType();
	list<string>& getBodyStr();
	list<AnnotationNode>& getAnnotations();
	list<ArgumentNode>& getArguments();

	// TODO написать объявления метода поиска узла внутри тела

	// Составление xml документа
	list<string>& getXMLView();

	// Составления визуализации виртуального дерева
	list<string> createNodeView();
};

