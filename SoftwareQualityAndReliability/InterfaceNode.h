#pragma once
#include "AbstractNode.h"

class InterfaceNode: AbstractNode {
private:
	string name; // Имя интерфейса
	string extend; // Имя наследования
	list<AnnotationNode> annotations; // Список аннотаций
	list<FieldNode> fields; // Список полей
	list<MethodNode> methods; // Список методов

public:
	// Сеттеры
	void setName(string& name);
	void setExtend(string& extend); 
	void setAnnotations(list<AnnotationNode>& annotastions);
	void setFields(list<FieldNode>& fields);
	void setMethods(list<MethodNode>& methods);

	// Геттеры
	string& getName();
	string& getExtend();
	list<AnnotationNode>& getAnnotations();
	list<FieldNode>& getFields();
	list<MethodNode>& getMethods();

	// Поиск и удаление узлов из общего текста
	list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	// Составление xml документа
	list<string>& getXMLView();

	// Составления визуализации виртуального дерева
	list<string> createNodeView();
};

