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
    cout << sizeof(Student);
    Student s1;
    s1.



    Student s2;
    return 0;
}