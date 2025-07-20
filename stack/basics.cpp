#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    //adding data to the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    cout << " size of the stack is" << st.size() << endl;
    //remove this

    st.pop();
    cout << " size of the stack after removal is" << st.size() << endl;

    return 0;
}