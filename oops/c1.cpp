#include <iostream>
using namespace std;

//student class creation

class Student{
    private :
        bool isGf;
   //BY DEFAULT ALL THE INFO UNDER A CLASS IS PRIVATE
    public:
        int id;
        string name;
        int marks;
        int noS;
        //default constructor
        Student(){
            cout << "im a default constructor" << endl;
        }

        //parametrized constructor

        Student(int _id, string _name, int _marks, int _nos){
            id= _id;
            name = _name;
            marks= _marks;
            noS=_nos;

        }

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

    private :
        void gfChatting(){
            cout << "chatting" << endl;
        }    
};
int main()
{
    
   Student s1;



    // s1.name = "adarsh",
    // s1.id = 11,
    // s1.noS = 5;
    //bydefault jab hume
 


    Student s2(1,"adarsh", 50,5);
    cout << s2.id << " " << s2.name << endl;
    Student s3(10,"akanksha", 55,1);
    cout << s3.id << " " << s3.name << endl;
    return 0;
}