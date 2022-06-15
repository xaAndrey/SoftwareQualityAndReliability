#pragma once

#include <iostream>
#include <string>
#include <list>

using namespace std;

class Annotations
{
private:
    string name;

public:
    void setName(string name);

    string getName();
};


class Class
{
private:
    string nameClass;
    string accessModeClass;
    list <string> bodyClassStr;
    int numberClass;
    int countMethod;
    int countBodyStrClass;
    Annotations annotationsClass;

public:
    void setNameCLass(string nameClass);
    void setAccessModeClass(string accessModeClass);
    void setBodyClassStr(list <string> bodyClassStr);
    void setNumberClass(int numberClass);
    void setCountMethod(int countMethod);
    void setCountBodyStrClass(int countBodyStrClass);
    void setAnnotationsClass(Annotations annatationsClass);

    string getNameClass();
    string getAsccessModelClass();
    list <string> getBodyClass();
    int getNumberClass();
    int getCountMethod();
    int getCountBodyStrClass();
    Annotations getAnnotationsClass();
};

class Arguments
{
private:
    string name;
    string type;

public:
    void setName(string name);
    void setType(string type);

    string getName();
    string getType();
};

class Methods
{
private:
    string nameMethod;
    string accessModeMethod;
    string modifierMethod;
    string typeValueMethod;
    Arguments argumentsMethod;
    list <string> bodyMethodStr;
    int numberMethod;
    int countBodyStrMethod;
    Annotations annatationsMethods;

public:
    void setNameMethods(string nameMethod);
    void setAccessModeMethod(string accessModeMethod);
    void setModifierMethod(string modifierMethod);
    void setTypeValueMethod(string typeValueMethod);
    void setArgumentsMethod(Arguments argumentsMethod);
    void setBodyMethodStr(list <string> bodyMethodStr);
    void setNumberMethod(int numberMethod);
    void setCountBodyStrMethod(int countBodyStrMethod);
    void setAnnatationsMethods(Annotations annatationsMethods);

    string getNameMethods();
    string getAccessModeMethod();
    string getModifierMethod();
    string getTypeValueMethod();
    Arguments getArgumentsMethod();
    list <string> getBodyMethodStr();
    int getNumberMethod();
    int getCountBodyStrMethod();
    Annotations getAnnotationsMethods();
};

class Improts
{
private:
    string name;

public:
    void setName(string name);

    string getName();
};

class Interface
{
private:
    string name;
    list <string> bodyInterfaceStr;
    int numberInterface;

public:
    void setName(string name);
    void setBodyInterfaceStr(list <string>);
    void setNumberInterface(int numberIterface);

    string getName();
    list <string> getBodyInterfaceStr();
    int getNumberInterface();
};

/*! Копирует данные из файла в массив строк
 * \param
 */
void copyData(string &sourceWay, list <string> &outputArr);

/*! Разбиавает код на элементы
 * \param
 */
void splitCodeIntoElements();

/*! Формирует документ xml расширения
 * \param
 */
void formingXMLDocumnt();

/*! Проверяет на наличие ошибок
 * \param
 */
void checkingForErrors();

/*! Выделяет импорты из кода программы
 * \param
 */
void selectImportsFromTheProgramm();

/*! Выделяет классы из кода программы
 * \param
 */
void selectClassFromTheProgramm();

/*! Выделяет интерфейсы из кода программы
 * \param
 */
void selectInterfaceFromTheProgramm();

/*! Выделяет методы из кода программы
 * \param
 */
void selectMethodFromTheProgramm();