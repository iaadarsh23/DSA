#include <iostream>
using namespace std;

class Stack{
    public :

        int* arr;
        int size;
        int top;

        Stack(int size){
            arr = new int[size];
            this->size= size;
            this->top=  -1;

        }
        //insertion with overflow condition
        void push(int data){
            if(top==size-1){
                cout << "overflow cannot enter" << endl;

            }
            top++;
            arr[top]= data;
        }

        void pop(){
            if(top==-1){
                cout << "underFLow cannot remove the data" << endl;
                return;
            }
            else{
                top--;
            }
        }
        //stack is empty

        void isEmpty(int top){
            if(top==-1){
                cout << "stack is empty" << endl;
            }
         }

        //get top element

        int getTop(int top){
            return top;
        }

        //get size

        int getSize(){
            return top+1;
        }

        void print() {
            cout << "Top:  " << top << endl;
            //cout << "Top element: " << getTop() << endl; 
            cout << "Stack: ";
            for(int i=0; i<getSize(); i++) {
              cout << arr[i] << " ";
            }  cout << endl << endl;
          }
};


int main()
{   
    Stack st(8);
    st.push(10);
    st.print();
    st.push(20);
    st.print();
    st.push(30);
    st.print();
    st.push(40);

    st.pop();
    st.print();
    cout << st.getSize() << endl;
    

    return 0;
}