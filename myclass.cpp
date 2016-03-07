#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent)
{
    thisisaprivatevariable = 10;
}

int MyClass::JoeyVariable()
{
    return (thisisaprivatevariable);
}

void MyClass::setJoeyVariable(int inputVariable)
{
    if (thisisaprivatevariable != inputVariable)
    {
        thisisaprivatevariable = inputVariable;
        emit JoeyVariableChanged(thisisaprivatevariable);
    }
}

void MyClass::increaseVariable()
{
    setJoeyVariable(thisisaprivatevariable + 1);
}
