#include "FieldNode.h"

void FieldNode::setAccessMode(string& accessMode) {
	
	this->accessMode = accessMode;
}

void FieldNode::setType(string& type) {
	this->type = type;
}

void FieldNode::setName(string& name) {

	this->name = name;
}
void FieldNode::setValue(string& value) {

	this->value = value;
}

void FieldNode::setAnnotations(list<AnnotationNode>& annotations) {
	this->annotations = annotations;
}

string& FieldNode::getAccessMode() {

	return this->accessMode;
}

string& FieldNode::getType() {
	return this->type;
}

string& FieldNode::getName() {

	return this->name;
}

string& FieldNode::getValue() {

	return this->value;
}

list<AnnotationNode>& FieldNode::getAnnotations() {
	return this->annotations;
}

list<string>& FieldNode::findAndDeleteFromStackNode(list<string>& textCode) {
	auto iterTextCode = textCode.begin(); // Создаем итератор, на начало списка
	regex isFiend("[a-z]* [A-Za-z]* [A-Za-z0-9\_]*( [A-Za-z0-9\^\%\&\'\,\;\=\?\$\@\#\!\$\*\(\)\"]*)*;"); // Создаем регулярное выражение
	smatch smc; // Создаем сматч

	// Для всех элементов списка
	for (; iterTextCode != textCode.end(); iterTextCode++) {
		string sourceStr = *iterTextCode; // Создаем строку, в которую помещаем содержимое проекта

		// Если в строке есть поле
		if (regex_search(sourceStr, smc, isFiend)) {
			int indexStartAccessMode = 0;
			int indexEndAccessMode = sourceStr.find(' ');
			int lengthAccessMode = indexEndAccessMode - indexStartAccessMode + 1;
			string tmpStr = sourceStr.substr(indexStartAccessMode, lengthAccessMode);
			this->setAccessMode(tmpStr);

			int indexStartType = indexEndAccessMode + 1;
			int indexEndType = sourceStr.find(' ', indexStartType);
			int lengthType = indexEndType - indexStartType + 1;
			tmpStr.clear();
			tmpStr = sourceStr.substr(indexStartType, lengthType);
			this->setType(tmpStr);

			if (sourceStr.find('=') != string::npos) {
				int indexStartName = indexEndType + 1;
				int indexEndName = sourceStr.find(' ', indexStartName);
				int lengthName = indexEndName - indexStartName + 1;
				tmpStr.clear();
				tmpStr = sourceStr.substr(indexStartName, lengthName);
				this->setName(tmpStr);

				int indexSeparatorBeforeElementEqual = sourceStr.find(' ', indexEndName + 1);

				int indexStartValue = indexSeparatorBeforeElementEqual + 1;
				int indexEndValue = sourceStr.find(';');
				int lengthValue = indexEndValue - indexStartValue + 1;
				tmpStr.clear();
				tmpStr = sourceStr.substr(indexStartValue, lengthValue);
				this->setValue(tmpStr);

				textCode.erase(iterTextCode);
			}
			else {
				int indexStartName = indexEndType + 1;
				int indexEndName = sourceStr.find(';', indexStartName);
				int lengthName = indexEndName - indexStartName + 1;
				tmpStr.clear();
				tmpStr = sourceStr.substr(indexStartName, lengthName);
				this->setName(tmpStr);

				textCode.erase(iterTextCode);
			}
		}
	}
	return textCode; // Возвращаем список строк
}

list<string>& FieldNode::getXMLView() {

	// Создаем временный список строк и присваиваем ему необходимое значение
	list<string> tmpXMLList = { "<field accessMode =\"" + this->getAccessMode() + "\", name = \"" + 
									this->getName() + "\", value = \"" + this->getValue() + "\"/>" };

	return tmpXMLList; // Возвращаем список строк

}

list<string> FieldNode::createNodeView() {
	// TODO - добавить реализацию
	list<string> tmpViewList;
	return tmpViewList;
}