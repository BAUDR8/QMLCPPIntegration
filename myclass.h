#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

class MyClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int JoeyVariable READ JoeyVariable WRITE setJoeyVariable NOTIFY JoeyVariableChanged)
public:
    explicit MyClass(QObject *parent = 0);
    int JoeyVariable();
    void setJoeyVariable(int inputVariable);

signals:
    void JoeyVariableChanged(int returnVariable);

public slots:
    void increaseVariable();

private:
    int thisisaprivatevariable;
};

#endif // MYCLASS_H
