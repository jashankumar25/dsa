#include <iostream>
using namespace std;

class Student
{
public:
    // attributes
    int id;
    int age;
    string name;
    int nos;

    // ctr -default ctor
    Student()
    {
        cout << "student default ctor called" << endl;
    }
    // behaviour /method / functions

    void study()
    {
        cout << this->name << "studing" << endl;
    }
    void sleep()
    {
        cout << this->name << "sleeping" << endl;
    }
    void bunk()
    {
        cout << this->name << "bunking" << endl;
    }
    // dtr -default ctor
    ~Student()
    {
        cout << this->name << "student default dtor called" << endl;
    }
};
int main()
{
    Student A;
    A.id = 1;
    A.age = 20;
    A.name = "jashan";
    A.nos = 9;

    A.study();

    Student B;
    B.id = 3;
    B.age = 21;
    B.name = "Rahul";
    B.nos = 5;
    B.bunk();
    return 0;
}