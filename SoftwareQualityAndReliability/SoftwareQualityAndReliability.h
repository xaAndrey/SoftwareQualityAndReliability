#pragma once

#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include <vector>
#include <fstream>

#include "ArgumentNode.h"

using namespace std;

/*! �������� ����� �� ����� � ������ �����
 * \param [in] sourceWay - ������ ���� �� ������������ �����
 * \return - ������ ����� � ������� �� �����
 */
vector<string> copyData(string& sourceWay);

///*! ���������� ��� �� �������� 
// * \param [out] sourceClasses - ������ �������
// * \param [out] sourceMethods - ������ �������
// * \param [out] sourceImports - ������ ��������
// * \param [out] sourceInterfaces - ������ �����������
// * \param [out] sourceCode - �������� �����
// */
//void splitCodeIntoElements(list<Class>& sourceClasses, list<Import>& sourceImports, list<Interface>& sourceInterfaces, vector<string>& sourceCode);
//
///*! �������� ������� �� ���� ���������
// * \param [in] importSource - ������� ������ Import
// * \param [in] sourceCode - �������� ����� 
// */
//void selectImportsFromTheProgramm(list<Import>& importSource, vector<string>& sourceCode);
//
///*! �������� ���������� �� ���� ��������� 
// * \param [out] interface - ������� ������ Interface
// * \param [in] sourceCode - �������� �����
// */
//void selectInterfaceFromTheProgramm(list<Interface>& interfaceSource, vector <string>& sourceVector);
//
///*! �������� ������ �� ���� ���������
// * \param [out] elementClass - ������� ������ Class
// * \param [in] sourceCode - �������� �����
// */
//void selectClassFromTheProgramm(Class& elementClass, vector<string>& sourceCode);
//
///*! �������� ������ �� ���� ��������� 
// * \param [out] method - ������� ������ Method
// * \param [in] sourceVector - �������� �����
// */
//void selectMethodFromTheProgramm(list<Method>& methodSource, vector <string>& sourceCode);
//
///*! ��������� �������� xml ����������
// * \param [in] listClass - ������ �������
// * \param [in] listMethods - ������ �������
// * \param [in] listImports - ������ ��������
// * \param [in] listInterfaces - ������ ����������
// * \return - c����� �����, ��������� ������ ������������ � ������� XML
// */
//list <string> formingXMLDocument(list<Class>& listClass, list<Method>& listMethods, list<Import>& listImports, list<Interface>& listInterfaces);