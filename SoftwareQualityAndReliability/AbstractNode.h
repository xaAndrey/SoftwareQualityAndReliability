#pragma once
#include <iostream>
#include <list>
#include <string>

using namespace std;

class AbstractNode {

public:
	/*! Create virrtual TREE
	*	param[in] textCode - Исходный текст программы
	*	return - список строк, которые остались после удаления
	*/
	virtual list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	/*! Сreate XML text
	*	return - Текст в XML формате, который соответствует определённому 
	*/
	virtual list<string>& getXMLView();
};

