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
    // сеттеры
    void setId(int id)
    {
        this->id = id;
    }

    void setName(string name)
    {
        this->name = name;
    }

    // геттеры
    int getId()
    {
        return this->id;
    }

    string getName()
    {
        return this->name;
    }

    // перегрузка оператора сравнения (равенства)
    bool operator== (const Import& other) const
    {
        return (this->name == other.name);
    }

    // перегрузка оператора сравнения (неравенства)
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
    // сеттеры
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

    // геттеры
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

    // перегрузка операторов сравнения (равенства)
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

    // перегрузка операторов сравнения (неравенства)
    bool operator!= (const Interface& other) const
    {
        return !(*this == other);
    }
};

/*! Копирует текст из файла в вектор строк
 * \param [in] sourceWay - строка пути до считываемого файла
 * \return - вектор строк с текстом из файла
 */
vector<string> copyData(string& sourceWay);

/*! Разбиавает код на элементы 
 * \param [out] sourceClasses - список классов
 * \param [out] sourceMethods - список методов
 * \param [out] sourceImports - список импортов
 * \param [out] sourceInterfaces - список интерфейсов
 * \param [out] sourceCode - заданный текст
 */
void splitCodeIntoElements(list<Class>& sourceClasses, list<Import>& sourceImports, list<Interface>& sourceInterfaces, vector<string>& sourceCode);

/*! Выделяет импорты из кода программы
 * \param [in] importSource - элемент класса Import
 * \param [in] sourceCode - заданный текст 
 */
void selectImportsFromTheProgramm(list<Import>& importSource, vector<string>& sourceCode);

/*! Выделяет интерфейсы из кода программы 
 * \param [out] interface - элемент класса Interface
 * \param [in] sourceCode - заданный текст
 */
void selectInterfaceFromTheProgramm(list<Interface>& interfaceSource, vector <string>& sourceVector);

/*! Выделяет классы из кода программы
 * \param [out] elementClass - элемент класса Class
 * \param [in] sourceCode - заданный текст
 */
void selectClassFromTheProgramm(Class& elementClass, vector<string>& sourceCode);

/*! Выделяет методы из кода программы 
 * \param [out] method - элемент класса Method
 * \param [in] sourceVector - заданный текст
 */
void selectMethodFromTheProgramm(list<Method>& methodSource, vector <string>& sourceCode);

/*! Формирует документ xml расширения
 * \param [in] listClass - список классов
 * \param [in] listMethods - список методов
 * \param [in] listImports - список импортов
 * \param [in] listInterfaces - список интерфейса
 * \return - cписок строк, выходного текста обработанный в формате XML
 */
list <string> formingXMLDocument(list<Class>& listClass, list<Method>& listMethods, list<Import>& listImports, list<Interface>& listInterfaces);