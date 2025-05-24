#include <iostream>
using namespace std;

//student class creation

class Student{
    int id;
    string name;
    int marks;
    int noS;
    //methods

    void study(){
        cout << "doing his fav task studying " << endl;
    }
    void bunk(){
        cout << "doing his fav task bunking " << endl;
    }
    void gaming(){
        cout << "doing his fav task gaming" << endl;
    }
};
int main()
{
    Student s1;
    Student s2;
    cout << sizeOf(Student);
    return 0;
}