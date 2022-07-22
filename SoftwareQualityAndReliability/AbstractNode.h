#pragma once
#include <iostream>
#include <list>
#include <string>

#include "AnnotationNode.h"
#include "ArgumentNode.h"
#include "ClassNode.h"
#include "FieldNode.h"
#include "ImportNode.h"
#include "InterfaceNode.h"
#include "MethodNode.h"
#include "PackageNode.h"
#include <regex>

using namespace std;

class AbstractNode {

public:
	/*! Find Nodes
	*	param[in] textCode - �����, � ������� ���������� ����
	*/
	void findNode(list<string>& textCode);

	/*! �reate XML text
	*	return - ����� � XML �������, ������� ������������� ������������ 
	*/
	virtual list<string>& getXMLView();

	/*! Create view virtual Tree
	*	
	*/
	virtual list<string> createNodeView();
};

