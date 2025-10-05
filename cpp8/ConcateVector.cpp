#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> First = {1, 2, 3};
    vector<int> Second = {4, 5, 6};
    vector<int> Third;

    // Concatenate using insert
    Third.insert(Third.end(), First.begin(), First.end());
    Third.insert(Third.end(), Second.begin(), Second.end());

    // Print result
    for (int i = 0; i < Third.size(); i++) {
        cout << Third[i] << " ";
    }
    return 0;
}
