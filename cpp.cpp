#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    int age;
    float salary;

public:
    Employee(string n, int a, float s) : name(n), age(a), salary(s) {}

    virtual void display() {
        cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << endl;
    }
};

class Manager : public Employee {
private:
    int level;

public:
    Manager(string n, int a, float s, int l) : Employee(n, a, s), level(l) {}

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << ", Level: " << level << endl;
    }
};

int main() {
    Employee emp("John Doe", 30, 50000);
    Manager mgr("Jane Smith", 35, 75000, 2);

    emp.display();
    mgr.display();

    Employee *empPtr;
    empPtr = &emp;
    empPtr->display();

    empPtr = &mgr;
    empPtr->display();

    return 0;
}
