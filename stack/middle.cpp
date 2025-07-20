// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;
// int main()
// {
//     stack<int> st;
//     vector<int> arr;
//     st.push(30);
//     st.push(50);
//     st.push(60);
//     st.push(70);
//     st.push(80);
//     st.push(90);



//     //get the middle of the stack
//     int size = st.size();
//     int mid = (size/2);
//     for(int i=1;i<=mid;i++){
//         int top1 = st.top();
//         arr.push_back(top1);
//         st.pop();
//     }

//     cout << arr.back();
//     return 0;
// }


//lets do ti using recursion and backtracking

#include <iostream>

#include <stack>

using namespace std;

int stackMid(stack <int> st, int pos){
    //base case
    if(pos==1){
        return st.top();
    }

    int temp = st.top();
    st.pop();
    return stackMid(st, pos-1);
    st.push(temp);
}




int main()

{
    stack<int> st;
    
    st.push(30);
    st.push(50);
    st.push(70);
    st.push(80);
    st.push(90);
    st.push(9009);
    //odd even position
    int pos=0;
    if(st.size() & 1){
         pos = (st.size()/2)+1;
    }
    else{
        pos = (st.size()/2);
        pos = st.s
    }

    
    cout << stackMid(st,pos);
    return 0;
}