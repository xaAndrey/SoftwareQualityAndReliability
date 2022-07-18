#include "MainNode.h"

// SETTERS
void MainNode::setImports(list<ImportNode>& imports) {
	this->imports = imports;
}

void MainNode::setPackages(list<PackageNode>& packages) {
	this->packages = packages;
}

void MainNode::setInterfaces(list<InterfaceNode>& interfaces) {
	this->interfaces = interfaces;
}

void MainNode::setClasses(list<ClassNode>& classes) {
	this->classes = classes;
}

// GETTERS
list<ImportNode> MainNode::getImports() {
	return this->imports;
}

list<PackageNode> MainNode::getPackages() {
	return this->packages;
}

list<InterfaceNode> MainNode::getInterfaces() {
	return this->interfaces;
}

list<ClassNode> MainNode::getClasses() {
	return this->classes;
}

// Поиск и удаление узлов из общего текста
list<string>& ImportNode::findAndDeleteFromStackNode(list<string>& textCode) {
	// TODO - добавить реализацию
	return textCode; // Возвращаем список строк
}

// Составление xml документа
list<string>& ImportNode::getXMLView() {

	// TODO - добавить реализацию
	// Создаем временный список строк и присваиваем ему необходимое значение
	list<string> tmpXMLList = { "" };

	return tmpXMLList; // Возвращаем список строк

}

list<string> MainNode::createNodeView() {
	// TODO - добавить реализацию
	list<string> tmpViewList;
	return tmpViewList;
}