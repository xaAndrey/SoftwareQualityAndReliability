#pragma once
#include <iostream>
#include <list>
#include <string>

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

