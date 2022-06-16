#pragma once

#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include <vector>

using namespace std;

class Arguments
{
private:
    string name;
    string type;

public:
    // конструкторы
    Arguments()
    {
        this->name = "";
        this->type = "";
    }

    Arguments(string name, string type)
    {
        this->name = name;
        this->type = type;
    }

    // сеттеры
    void setName(string name)
    {
        this->name = name;
    }

    void setType(string type)
    {
        this->type = type;
    }


    //геттеры
    string getName()
    {
        return this->name;
    }

    string getType()
    {
        return this->type;
    }

    // перегрузки оператора срванения (равенства)
    bool operator== (const Arguments &other) const
    {
        return (this->name == other.name && this->type == other.type);
    }

    // перегрузки оператора срванения (неравенства)
    friend bool operator != (Arguments& left, Arguments& right)
    {
        return !(left == right);
    }
};

class Annotations
{
private:
    string name;
    list <Arguments> arguments;

public:
    // конструкторы
    Annotations()
    {
        this->name = "";
        Arguments tmpArguments = Arguments("", "");
        this->arguments.push_back(tmpArguments);
    }

    Annotations(string name)
    {
        this->name = name;
    }

    // сеттеры
    void setName(string name)
    {
        this->name = name;
    }

    // геттеры
    string getName()
    {
        return this->name;
    }

    // перегрузки оператора срванения (равенства)
    bool operator== (const Annotations& other) const
    {
        bool result = this->name == other.name;
        
        result = (this->arguments.size() == other.arguments.size()) && result;

        auto iterLeft = this->arguments.begin();
        auto iterRight = other.arguments.begin();

        for (; iterLeft != this->arguments.end(); iterLeft++, iterRight++)
        {
            result = (*iterLeft == *iterRight) && result;
        }

        return result;
    }

    // перегрузки оператора срванения (неравенства)
    friend const bool operator!= (const Annotations& left, const Annotations& right)
    {
        return !(left == right);
    }
};

class Class
{
private:
    int id;
    string name;
    string accessMode;
    list <string> bodyStr;
    int countMethod;
    int countBodyStr;
    list <Annotations> annotations;

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

    void setAccessMode(string accessMode)
    {
        this->accessMode = accessMode;
    }

    void setBodyStr(list <string> bodyStr)
    {
        this->bodyStr = bodyStr;
    }

    void setCountMethod(int countMethod)
    {
        this->countMethod = countMethod;
    }

    void setCountBodyStr(int countBodyStr)
    {
        this->countBodyStr = countBodyStr;
    }

    void setAnnotations(string annatationsName)
    {
        Annotations tmpAnnotations = Annotations(annatationsName);
        this->annotations.push_back(tmpAnnotations);
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

    string getAsccessModel()
    {
        return this->accessMode;
    }

    list <string> getBodyStr()
    {
        return this->bodyStr;
    }

    int getCountMethod()
    {
        return this->countMethod;
    }

    int getCountBodyStr()
    {
        return this->countBodyStr;
    }

    list <Annotations> getAnnotations()
    {
        return this->annotations;
    }

    // перегрузки оператора срванения (равенства)
    friend bool operator== (Class& left, Class& right)
    {
        bool result = left.id == right.id;
        result = left.name == right.name && result;
        result = left.accessMode == right.accessMode && result;
        result = left.countMethod == right.countMethod && result;
        result = left.countBodyStr == right.countBodyStr && result;
        
        result = (left.bodyStr.size() == right.bodyStr.size()) && result;
        auto iterLeft = left.bodyStr.begin();
        auto iterRight = right.bodyStr.begin();
        for (; iterLeft != left.bodyStr.end(); iterLeft++, iterRight++)
        {
            result = (*iterLeft == *iterRight) && result;
        }

        result = left.annotations.size() == right.annotations.size() && result;
        auto iterLeft1 = left.annotations.begin();
        auto iterRight1 = right.annotations.begin();
        for (; iterLeft1 != left.annotations.end(); iterLeft1++, iterRight1++)
        {
            result = *iterLeft1 == *iterRight1 && result;
        }

        return result;
    }

    // перегрузки оператора срванения (неравенства)
    friend bool operator!= (Class& left, Class& right)
    {
        return !(left == right);
    }
};

class Methods
{
private:
    int id;
    string name;
    string accessMode;
    string modifier;
    string typeValue;
    list <Arguments> arguments;
    list <string> bodyStr;
    list <Annotations> annotations;

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

    void setAccessMode(string accessMode)
    {
        this->accessMode = accessMode;
    }

    void setModifier(string modifier)
    {
        this->modifier = modifier;
    }

    void setTypeValue(string typeValue)
    {
        this->typeValue = typeValue;
    }

    void setArguments(string nameArguments, string typeArguments)
    {
        Arguments tmpArguments = Arguments(nameArguments, typeArguments);
        this->arguments.push_back(tmpArguments);
    }

    void setBodyStr(string bodyStr)
    {
        this->bodyStr.push_back(bodyStr);
    }

    void setAnnatations(string annatationsName)
    {
        Annotations tmpAnnotations = Annotations(annatationsName);
        this->annotations.push_back(tmpAnnotations);
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

    string getAccessMode()
    {
        return this->accessMode;
    }
    
    string getModifier()
    {
        return this->modifier;
    }

    string getTypeValue()
    {
        return this->typeValue;
    }

    list <Arguments> getArguments()
    {
        return this->arguments;
    }

    list <string> getBodyStr()
    {
        return this->bodyStr;
    }

    list <Annotations> getAnnotations()
    {
        return this->annotations;
    }

    // перегрузки оператора срванения (равенства)
    bool operator== (const Methods& other) const
    {
        bool result = this->id == other.id;
        result = this->name == other.name && result;
        result = this->accessMode == other.accessMode && result;
        result = this->modifier == other.modifier && result;
        result = this->typeValue == other.typeValue && result;

        result = (this->arguments.size() == other.arguments.size()) && result;
        auto iterLeft = this->arguments.begin();
        auto iterRight = other.arguments.begin();
        for (; iterLeft != this->arguments.end(); iterLeft++, iterRight++)
        {
            result = (*iterLeft == *iterRight) && result;
        }

        result = (this->bodyStr.size() == other.bodyStr.size()) && result;
        auto iterLeft1 = this->bodyStr.begin();
        auto iterRight1 = other.bodyStr.begin();
        for (; iterLeft1 != this->bodyStr.end(); iterLeft1++, iterRight1++)
        {
            result = (*iterLeft1 == *iterRight1) && result;
        }

        result = (this->annotations.size() == other.annotations.size()) && result;
        auto iterLeft2 = this->annotations.begin();
        auto iterRight2 = other.annotations.begin();
        for (; iterLeft2 != this->annotations.end(); iterLeft2++, iterRight2++)
        {
            result = (*iterLeft2 == *iterRight2) && result;
        }

        return result;
    }

    // перегрузки оператора срванения (неравенства)
    friend bool operator!= (Methods & left, Methods & right)
    {
        return !(left == right);
    }
};

class Imports
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
    friend bool operator== (Imports& left, Imports& right)
    {
        return (left.name == right.name);
    }

    // перегрузка оператора сравнения (неравенства)
    friend bool operator!= (Imports& left, Imports& right)
    {
        return !(left == right);
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

    void setBodyStr(list <string> bodyStr)
    {
        this->bodyStr = bodyStr;
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
    friend bool operator== (Interface& left, Interface& right)
    {
        bool result = left.id == right.id;
        result = (left.name == right.name) && result;

        result = (left.bodyStr.size() == right.bodyStr.size()) && result;
        auto iterLeft = left.bodyStr.begin();
        auto iterRight = right.bodyStr.begin();
        for (; iterLeft != left.bodyStr.end(); iterLeft++, iterRight++)
        {
            result = (*iterLeft == *iterRight) && result;
        }

        return result;
    }

    // перегрузка операторов сравнения (неравенства)
    friend bool operator!= (Interface& left, Interface& right)
    {
        return !(left == right);
    }
};

/*! Копирует данные из файла в массив строк !!!
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

/*! Выделяет методы из кода программы !!?
 * \param
 */
void selectMethodFromTheProgramm(Methods &method, vector <string> &sourceArr);