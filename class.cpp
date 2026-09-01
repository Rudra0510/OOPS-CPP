// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
//     public:
//     string name;
//     int rollno;
//     int marks;

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Roll No: " << rollno << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };
// int main() {
//     Student s;
//     s.name = "Rudra" ;
//     s.rollno = 955 ;
//     s.marks = 8.5;
//     s.display();
//     return 0;
// }

// // Car Class - Program 2
// #include <iostream>
// using namespace std;

// class Car{
//     public:
//     string brand;
//     int year ;

//     void display(){
//         cout << "Brand = " <<brand << endl;
//         cout << "Year = " << year ;
//     }
// };
// int main(){
//     Car c ;
//     c.brand = "B M W" ;
//     c.year = 2025 ; 
//     c.display();

//     return 0 ;
// }


// //Program 3 - Add two numbers
// #include <iostream>
// using namespace std;

// class Maths{
//     public:
//     int a;
//     int b;

//     void add(){
//         cout << "Enter 1st Number = " ;
//         cin >> a;
//         cout << "Enter 2nd Number = " ;
//         cin >> b;
        
//         cout << "Sum = " << a+b << endl ;
//     }
//     void multiply(){
//         cout << "Product = " << a*b;
//     }
// };
// int main(){
//     Maths m;
//     m.a ;
//     m.b ;

//     m.add();
//     m.multiply();

//     return 0 ;
// }

//Program 4 - Area of rectangle
#include <iostream>
using namespace std;

class Area{
    public:
    int l ;
    int b ;

    void display(){
        cout << "Enter the length = " ;
        cin >> l ;
        cout <<"Enter the breadth = "  ;
        cin >> b ;
        cout << "Area of rectangle = " <<l*b ;
    }
};
int main(){
    Area r;
    r.l ;
    r.b ;
    r.display();

    return 0 ;
}