#pragma once

#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include <vector>
#include <fstream>

using namespace std;

class Argument
{
private:
    string name;
    string type;

public:
    // ������������
    Argument()
    {
        this->name = "";
        this->type = "";
    }

    Argument(string name, string type)
    {
        this->name = name;
        this->type = type;
    }

    // �������
    void setName(string name)
    {
        this->name = name;
    }

    void setType(string type)
    {
        this->type = type;
    }


    //�������
    string getName()
    {
        return this->name;
    }

    string getType()
    {
        return this->type;
    }

    // ���������� ��������� ��������� (���������)
    bool operator== (const Argument &other) const
    {
        return (this->name == other.name && this->type == other.type);
    }

    // ���������� ��������� ��������� (�����������)
    bool operator!= (const Argument &other) const
    {
        return !(*this == other);
    }
};

class Annotation
{
private:
    string name;
    list <Argument> arguments;

public:
    // ������������
    Annotation()
    {
        this->name = "";
        Argument tmpArguments = Argument("", "");
        this->arguments.push_back(tmpArguments);
    }

    Annotation(string name)
    {
        this->name = name;
    }

    // �������
    void setName(string name)
    {
        this->name = name;
    }

    // �������
    string getName()
    {
        return this->name;
    }

    // ���������� ��������� ��������� (���������)
    bool operator== (const Annotation& other) const
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

    // ���������� ��������� ��������� (�����������)
    bool operator!= (const Annotation& other) const
    {
        return !(*this == other);
    }
};

class Method
{
private:
    int id;
    string name;
    string accessMode;
    string modifier;
    string typeValue;
    list <Argument> arguments;
    list <string> bodyStr;
    list <Annotation> annotations;

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
        Argument tmpArguments = Argument(nameArguments, typeArguments);
        this->arguments.push_back(tmpArguments);
    }

    void setBodyStr(string bodyStr)
    {
        this->bodyStr.push_back(bodyStr);
    }

    void setAnnatations(string annatationsName)
    {
        Annotation tmpAnnotations = Annotation(annatationsName);
        this->annotations.push_back(tmpAnnotations);
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

    list <Argument> getArguments()
    {
        return this->arguments;
    }

    list <string> getBodyStr()
    {
        return this->bodyStr;
    }

    list <Annotation> getAnnotations()
    {
        return this->annotations;
    }

    // ���������� ��������� ��������� (���������)
    bool operator== (const Method& other) const
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

    // ���������� ��������� ��������� (�����������)
    bool operator!= (const Method & other) const
    {
        return !(*this == other);
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
    list <Method> methods;
    list <Annotation> annotations;

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

    void setAccessMode(string accessMode)
    {
        this->accessMode = accessMode;
    }

    void setBodyStr(string bodyStr)
    {
        this->bodyStr.push_back(bodyStr);
    }

    void setCountMethod(int countMethod)
    {
        this->countMethod = countMethod;
    }

    void setCountBodyStr(int countBodyStr)
    {
        this->countBodyStr = countBodyStr;
    }

    void setMethods(string methods)
    {
        Method tmpMethods;
        tmpMethods.setName(methods);
        this->methods.push_back(tmpMethods);
    }

    void setAnnotations(string annatationsName)
    {
        Annotation tmpAnnotations = Annotation(annatationsName);
        this->annotations.push_back(tmpAnnotations);
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

    list <Method> getMethods()
    {
        return this->methods;
    }

    list <Annotation> getAnnotations()
    {
        return this->annotations;
    }

    // ���������� ��������� ��������� (���������)
    bool operator== (const Class& other) const
    {
        bool result = this->id == other.id;
        result = this->name == other.name && result;
        result = this->accessMode == other.accessMode && result;
        result = this->countMethod == other.countMethod && result;
        result = this->countBodyStr == other.countBodyStr && result;
        
        result = (this->bodyStr.size() == other.bodyStr.size()) && result;
        auto iterLeft = this->bodyStr.begin();
        auto iterRight = other.bodyStr.begin();
        for (; iterLeft != this->bodyStr.end(); iterLeft++, iterRight++)
        {
            result = (*iterLeft == *iterRight) && result;
        }

        result = this->annotations.size() == other.annotations.size() && result;
        auto iterLeft1 = this->annotations.begin();
        auto iterRight1 = other.annotations.begin();
        for (; iterLeft1 != this->annotations.end(); iterLeft1++, iterRight1++)
        {
            result = *iterLeft1 == *iterRight1 && result;
        }

        result = this->methods.size() == other.methods.size() && result;
        auto iterLeft2 = this->methods.begin();
        auto iterRight2 = other.methods.begin();
        for (; iterLeft2 != this->methods.end(); iterLeft2++, iterRight2++)
        {
            result = *iterLeft2 == *iterRight2 && result;
        }

        return result;
    }

    // ���������� ��������� ��������� (�����������)
    bool operator!= (const Class& other) const
    {
        return !(*this == other);
    }
};

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

/*! �������� ������ �� ����� � ������ ����� !!!
 * \param
 */
vector<string> copyData(string&);

/*! ���������� ��� �� �������� !!?
 * \param
 */
void splitCodeIntoElements(list<Class>&, list<Method>&, list<Import>&, list<Interface>&, vector<string>&);

/*! ��������� �������� xml ���������� !!?
 * \param
 */
list <string> formingXMLDocument(list<Class>&, list<Method>&, list<Import>&, list<Interface>&);

/*! �������� ������� �� ���� ��������� !!?
 * \param
 */
void selectImportsFromTheProgramm(Import&, vector<string>&);

/*! �������� ������ �� ���� ��������� !!?
 * \param
 */
void selectClassFromTheProgramm(Class&, vector<string>&);

/*! �������� ���������� �� ���� ��������� !!?
 * \param
 */
void selectInterfaceFromTheProgramm(Interface&, vector<string>&);

/*! �������� ������ �� ���� ��������� !!?
 * \param
 */
void selectMethodFromTheProgramm(Method&, vector<string>&);