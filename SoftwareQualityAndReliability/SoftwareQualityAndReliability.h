#pragma once

#include <iostream>
#include <string>
#include <list>

using namespace std;

struct Class
{
    string nameClass;
    string accessModeClass;
    // list <string> annatationsClass;
    list <string> bodyClassStr;
    int numberClass;
    int countMethod;
    int countBodyStrClass;
    struct Annitatins *annatationsClass;
};

struct Annotations
{
    string name;
};

struct Methods
{
    string nameMethod;
    string accessModeMethod;
    string modifierMrthod;
    string typeValueMthod;
    struct Arguments* argumentsMehod;
    // list <string> annatationsMethod;
    list <string> bodyMethodStr;
    int numberMethod;
    int countBodyStrMethod;
    struct Annotations* annatationsMethods;
};

struct Arguments
{
    string name;
    string type;
};

struct Improts
{
    string name;
};

struct Interface
{
    string name;
    list <string> bodyInterfaceStr;
    int numberInterface;
};

/*! Копирует данные из файла в массив строк
 * \param
 */
void copyData();

/*! Разбиавает код на элементы
 * \param
 */
void splitCodeIntoElements();

/*! Формирует документ xml расширения
 * \param
 */
void formingXMLDocumnt();