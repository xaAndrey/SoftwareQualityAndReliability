#pragma once
#include "AbstractNode.h"

class MainNode: AbstractNode {
private:
	list<ImportNode> imports;
	list<PackageNode> packages;
	list<InterfaceNode> interfaces;
	list<ClassNode> classes;

public:
	// SETTERS
	void setImports(list<ImportNode>& imports);
	void setPackages(list<PackageNode>& packages);
	void setInterfaces(list<InterfaceNode>& interfaces);
	void setClasses(list<ClassNode>& classes);

	//GETTERS
	list<ImportNode> getImports();
	list<PackageNode> getPackages();
	list<InterfaceNode> getInterfaces();
	list<ClassNode> getClasses();

	// Поиск и удаление узлов из общего текста
	list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	// Составление xml документа
	list<string>& getXMLView();
};