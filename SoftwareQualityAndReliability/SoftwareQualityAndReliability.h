#pragma once

#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include <vector>
#include <fstream>

#include "ArgumentNode.h"

using namespace std;

class Import
{
private:
    int id;
    string name;

public:
    // �������
    void setId(int id)
    {
        this->id = id;
    }

    void setName(string name)
    {
        this->name = name;
    }

    // �������
    int getId()
    {
        return this->id;
    }

    string getName()
    {
        return this->name;
    }

    // ���������� ��������� ��������� (���������)
    bool operator== (const Import& other) const
    {
        return (this->name == other.name);
    }

    // ���������� ��������� ��������� (�����������)
    bool operator!= (const Import& other) const
    {
        return !(*this == other);
    }
};

class Interface
{
private:
    int id;
    string name;
    list <string> bodyStr;

public:
    // �������
    void setId(int id)
    {
        this->id = id;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setBodyStr(string bodyStr)
    {
        this->bodyStr.push_back(bodyStr);
    }

    // �������
    int getId()
    {
        return this->id;
    }

    string getName()
    {
        return this->name;
    }

    list <string> getBodyStr()
    {
        return this->bodyStr;
    }

    // ���������� ���������� ��������� (���������)
    bool operator== (const Interface& other) const
    {
        bool result = this->id == other.id;
        result = (this->name == other.name) && result;

        result = (this->bodyStr.size() == other.bodyStr.size()) && result;
        auto iterLeft = this->bodyStr.begin();
        auto iterRight = other.bodyStr.begin();
        for (; iterLeft != this->bodyStr.end(); iterLeft++, iterRight++)
        {
            result = (*iterLeft == *iterRight) && result;
        }

        return result;
    }

    // ���������� ���������� ��������� (�����������)
    bool operator!= (const Interface& other) const
    {
        return !(*this == other);
    }
};

/*! �������� ����� �� ����� � ������ �����
 * \param [in] sourceWay - ������ ���� �� ������������ �����
 * \return - ������ ����� � ������� �� �����
 */
vector<string> copyData(string& sourceWay);

/*! ���������� ��� �� �������� 
 * \param [out] sourceClasses - ������ �������
 * \param [out] sourceMethods - ������ �������
 * \param [out] sourceImports - ������ ��������
 * \param [out] sourceInterfaces - ������ �����������
 * \param [out] sourceCode - �������� �����
 */
void splitCodeIntoElements(list<Class>& sourceClasses, list<Import>& sourceImports, list<Interface>& sourceInterfaces, vector<string>& sourceCode);

/*! �������� ������� �� ���� ���������
 * \param [in] importSource - ������� ������ Import
 * \param [in] sourceCode - �������� ����� 
 */
void selectImportsFromTheProgramm(list<Import>& importSource, vector<string>& sourceCode);

/*! �������� ���������� �� ���� ��������� 
 * \param [out] interface - ������� ������ Interface
 * \param [in] sourceCode - �������� �����
 */
void selectInterfaceFromTheProgramm(list<Interface>& interfaceSource, vector <string>& sourceVector);

/*! �������� ������ �� ���� ���������
 * \param [out] elementClass - ������� ������ Class
 * \param [in] sourceCode - �������� �����
 */
void selectClassFromTheProgramm(Class& elementClass, vector<string>& sourceCode);

/*! �������� ������ �� ���� ��������� 
 * \param [out] method - ������� ������ Method
 * \param [in] sourceVector - �������� �����
 */
void selectMethodFromTheProgramm(list<Method>& methodSource, vector <string>& sourceCode);

/*! ��������� �������� xml ����������
 * \param [in] listClass - ������ �������
 * \param [in] listMethods - ������ �������
 * \param [in] listImports - ������ ��������
 * \param [in] listInterfaces - ������ ����������
 * \return - c����� �����, ��������� ������ ������������ � ������� XML
 */
list <string> formingXMLDocument(list<Class>& listClass, list<Method>& listMethods, list<Import>& listImports, list<Interface>& listInterfaces);