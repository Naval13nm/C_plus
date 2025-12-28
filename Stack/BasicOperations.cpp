#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<char> s;
    string given = "hello";
    string ans;
    for (auto x : given)
    {
        s.push(x);
    }
    while (s.empty() != 1)
    {
        ans = ans + s.top();
        s.pop();
    }
    cout << ans;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;
    // cout<<s.size()<<endl;
    // cout<<s.empty();

    return 0;
}



// #include <iostream>
// using namespace std;

// class Stack {
// private:
//     int arr[100];   // fixed size array
//     int top;        // index of top element

// public:
//     Stack() {
//         top = -1;   // initially stack is empty
//     }

//     // Insert element
//     void push(int x) {
//         if (top == 99) {       // size - 1
//             cout << "Stack Overflow\n";
//             return;
//         }
//         top++;
//         arr[top] = x;
//     }

//     // Remove element
//     int pop() {
//         if (top == -1) {
//             cout << "Stack Underflow\n";
//             return -1;
//         }
//         int val = arr[top];
//         top--;
//         return val;
//     }

//     // Return top element
//     int peek() {
//         if (top == -1) {
//             cout << "Stack is Empty\n";
//             return -1;
//         }
//         return arr[top];
//     }

//     // Check empty
//     bool isEmpty() {
//         return top == -1;
//     }
// };

// int main() {
//     Stack st;

//     st.push(10);
//     st.push(20);
//     st.push(30);

//     cout << "Top: " << st.peek() << endl;

//     cout << "Popped: " << st.pop() << endl;
//     cout << "Popped: " << st.pop() << endl;

//     cout << "Is Empty: " << st.isEmpty() << endl;

//     return 0;
// }