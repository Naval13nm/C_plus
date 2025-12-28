#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "front: " << st.front() << endl;

    cout << "back: " << st.back() << endl;
    st.pop();
    st.pop();

    cout << st.front() << endl;
    cout << st.size() << endl;

    // print valus of queue
    // int sum=0;
    // int even=0;
    // int odd=0;
    // while (!st.empty())
    // {
    //     if (st.front()%2==0)
    //     {
    //         even++;
    //     }
    //     else{
    //         odd++;
    //     }
        
    //     cout<<st.front()<<" "<<endl;
    //     sum=st.front()+sum;
    //     st.pop();

    // }
    // cout<<sum<<endl;
    // cout<<even<<endl;
    // cout<<odd<<endl;
    return 0;
}