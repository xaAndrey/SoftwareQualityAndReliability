#pragma once

#include <iostream>
#include <string>
#include <list>

using namespace std;

struct Class
{
    string nameClass;
    string accessModeClass;
    list <string> annatationsClass;
    list <string> bodyClassStr;
    int numberClass;
    int countMethod;
    int countBodyStrClass;
    //    struct Annitatins *annatationsClass;
};

//struct Annotations
//{
//    QString name;
//};

struct Methods
{
    string nameMethod;
    string accessModeMethod;
    string modifierMrthod;
    string typeValueMthod;
    struct Argements* argumentsMehod;
    list <string> annatationsMethod;
    list <string> bodyMethodStr;
    int numberMethod;
    int countBodyStrMethod;

};

struct Argements
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