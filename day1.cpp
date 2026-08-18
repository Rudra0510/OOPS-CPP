#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << name << endl << age;
    }
};
class Car{
    public:
     string brand;
     int year;
    void display(){
        cout << brand << endl << year; 
    }
};

int main() {
    Student s;
    s.name = "Rudra";
    s.age = 20;
    s.display();
cout << endl;
    Car c;
    c.brand = "B M W";
    c.year = 2026;
    c.display();

    return 0;
}