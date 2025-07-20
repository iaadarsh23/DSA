#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <char>st;
    string str = "reenigne tnellecxe na dna yob doog a si ihtapirt HSRADA";
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        st.push(ch);
    }
    //rpinting the letters in reverse order
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    
    
    return 0;
}