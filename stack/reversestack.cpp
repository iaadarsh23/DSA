#include <iostream>
#include <stack>
using namespace std;
//insert at bottom;

void insertbtm(stack<int>& st, int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int temp = st.top();
    st.pop();
    insertbtm(st , x);
    st.push(temp);
}


void reverse(stack<int>& st){
    if(st.empty()){
        
        return;
    }
    int temp= st.top();
    st.pop();
    reverse(st);
    insertbtm(st,temp);

}

int main()
{   
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << " befor reverse " << endl;
   
   
    // Display stack elements
    stack<int> tempSt = st;
    while (!tempSt.empty()) {
        cout << tempSt.top() << endl;
        tempSt.pop();
    }

    cout << "after reverse" << endl;

    reverse(st);
    stack<int> temp = st;
    while(!temp.empty()){
        cout << temp.top() << endl;
        temp.pop();
    }
    return 0;
}