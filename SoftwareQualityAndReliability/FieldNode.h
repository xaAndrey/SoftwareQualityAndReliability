#pragma once
#include "AbstractNode.h"

class FieldNode: AbstractNode {

private:
	string accessMode; // Модификатор доступа поля
	string type; // Тип значения поля
	string name; // Имя поля
	string value; // Значения поля
	list<AnnotationNode> annotations; // Список аннотаций поля

public:
	// Сеттеры
	void setAccessMode(string& accessMode);
	void setType(string& type);
	void setName(string& name);
	void setValue(string& value);
	void setAnnotations(list<AnnotationNode>& annotations);
	
	// Геттеры
	string& getAccessMode();
	string& getType();
	string& getName();
	string& getValue();
	list<AnnotationNode>& getAnnotations();

	// Поиск и удаление узлов из общего текста
	list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	// Составление xml документа
	list<string>& getXMLView();
};

