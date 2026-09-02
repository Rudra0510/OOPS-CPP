#include <iostream>
using namespace std;

class Student2;
class Student1{
private:
    int marks1;
public:
    Student1(int m1){
        marks1 = m1;
    }

    friend void compare(Student1, Student2);
};
class Student2{
private:
    int marks2;
public:
    Student2(int m2){
        marks2 = m2;
    }
    friend void compare(Student1, Student2);
};
void compare(Student1 obj1, Student2 obj2)
{
    if (obj1.marks1 > obj2.marks2)
        cout << "Marks of 1st student is greater." << endl;
    else if (obj1.marks1 < obj2.marks2)
        cout << "Marks of 2nd student is greater." << endl;
    else
        cout << "Both values are equal." << endl;
}
int main(){
    Student1 obj1(50);
    Student2 obj2(30);

    compare(obj1, obj2);

    return 0;
}