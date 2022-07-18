#pragma once
#include "AbstractNode.h"

class ClassNode: public AbstractNode {

private:
	string name; //имя класса
	string accessMode; // модификатор доступа класса
	string modifier; // модификатор класса
	string extend; // расширения класса
	list<string> implements; // Список реализуемых интерфейсов класса
	list<AnnotationNode> annotations; // Список аннотаций класса
	list<ClassNode> classes; // Список классов класса
	list<InterfaceNode> interfaces; // Список интерфейсов класса
	list<FieldNode> fields; // список полей класса
 	list<ConstructorNode> constructors; // список полей класса
	list<MethodNode> methods; // список методов класса 

public:
	// Setters
	void setName(string& name);
	void setAccessMode(string& accessMode);
	void setModifier(string& modifier);
	void setExtend(string& extend);
	void setImplements(list<string>& implements);
	void setAnnotations(list<AnnotationNode>& annotations);
	void setClasses(list<ClassNode>& classes);
	void setInteraces(list<InterfaceNode>& interfaces);
	void setFields(list<FieldNode>& fields);
	void setConstructors(list<ConstructorNode>& constructors);
	void setMethods(list<MethodNode>& methods);

	// Getters
	string& getName();
	string& getAccessMode();
	string& getModifier();
	string& getExtend();
	list<string>& getImplements();
	list<AnnotationNode>& getAnnotations();
	list<ClassNode>& getClasses();
	list<InterfaceNode>& getInterfaces();
	list<FieldNode>& getFields();
	list<ConstructorNode>& getConstructors();
	list<MethodNode>& getMethods();

	// Поиск и удаление узлов из общего текста
	list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	// Составление xml документа
	list<string>& getXMLView();

	// Составления визуализации виртуального дерева
	list<string> createNodeView();
};

