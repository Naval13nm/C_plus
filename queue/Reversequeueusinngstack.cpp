#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    queue<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    stack<int>s;

    while(!st.empty()){
        s.push(st.front());
        st.pop();
    }
    while(!s.empty()){
        st.push(s.top());
        s.pop();
    }

    while(!st.empty()){
      cout<<st.front()<<endl;
        st.pop();
    }
    return 0;
}