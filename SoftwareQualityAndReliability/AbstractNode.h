#pragma once
#include <iostream>
#include <list>
#include <string>

#include "AnnotationNode.h"
#include "ArgumentNode.h"
#include "ClassNode.h"
#include "ConstructorNode.h"
#include "FieldNode.h"
#include "ImportNode.h"
#include "InterfaceNode.h"
#include "MethodNode.h"
#include "PackageNode.h"

using namespace std;

class AbstractNode {

public:
	/*! Create virrtual TREE
	*	param[in] textCode - �������� ����� ���������
	*	return - ������ �����, ������� �������� ����� ��������
	*/
	virtual list<string>& findAndDeleteFromStackNode(list<string>& textCode);

	/*! �reate XML text
	*	return - ����� � XML �������, ������� ������������� ������������ 
	*/
	virtual list<string>& getXMLView();
};

