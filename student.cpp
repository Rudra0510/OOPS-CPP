#include <iostream>
using namespace std;

class Student{
    string name;
    int marks;

    public:
    Student(string n , int m){
        name=n;
        cout<<"Name: "<<n<<endl;
        marks=m;
        cout<<"Marks: "<<m<<endl;
    }
};
int main(){
    Student s1("Rudra" , 98) , s2("Rajnish" , 77);
    return 0;
}