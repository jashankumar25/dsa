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

    // Parameterized constructor
    Student(int id, int age, string name, int nos)
    {
        cout << "student parmeterised ctor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
    }
    // ctr -copy  ctor
    Student(const Student &srcobj) // srcobj =A

    {
        cout << "copy ctor called" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
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
        cout << "student default dtor called for " << name << endl;
    }
};
int main()
{
    Student A(1, 20, "jashan", 4); // stack used
    Student B(2, 26, "rahul", 4);

    cout << A.name << " " << A.age << endl;

    A.bunk();
    B.sleep();

    // COPY CTR
    Student C = A;
    // Student C(A);
    cout << C.name << " " << A.name << endl;

    // dyanmic allocation or student pointer ka access;

    Student *D = new Student(6, 14, "bansal", 7);

    cout << D->name << endl;
    cout << D->age << endl;

    D->study();
    delete D;

    return 0;
}