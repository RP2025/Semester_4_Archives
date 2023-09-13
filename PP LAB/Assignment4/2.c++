#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
    char gender;

public:
    Person(string n, int a, char g) {
        name = n;
        age = a;
        gender = g;
    }

    void displayProfile() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

class Student : public Person {
protected:
    string dept;
    int year;

public:
    Student(string n, int a, char g, string d, int y) : Person(n, a, g) {
        dept = d;
        year = y;
    }

    void displayProfile() {
        Person::displayProfile();
        cout << "Department: " << dept << endl;
        cout << "Year: " << year << endl;
    }
};

class Clerk : public Person {
protected:
    int workload;
    double salary;

public:
    Clerk(string n, int a, char g, int w, double s) : Person(n, a, g) {
        workload = w;
        salary = s;
    }

    void displayProfile() {
        Person::displayProfile();
        cout << "Workload: " << workload << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Professor : public Person {
protected:
    string dept;
    int courseload;
    double salary;

public:
    Professor(string n, int a, char g, string d, int c, double s) : Person(n, a, g) {
        dept = d;
        courseload = c;
        salary = s;
    }

    void displayProfile() {
        Person::displayProfile();
        cout << "Department: " << dept << endl;
        cout << "Course load: " << courseload << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student s("John Doe", 20, 'M', "Computer Science", 2);
    Clerk c("Mary Smith", 35, 'F', 40, 50000);
    Professor p("Bob Johnson", 50, 'M', "Mathematics", 3, 80000);

    s.displayProfile();
    cout << endl;
    c.displayProfile();
    cout << endl;
    p.displayProfile();
    cout << endl;

    return 0;
}