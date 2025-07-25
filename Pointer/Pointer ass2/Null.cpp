
#include <iostream>
using namespace std;

int main() {
    int *p = NULL;  // p is not pointing to anything
    if (p == NULL) {
        cout << "Pointer is NULL" << endl;
    }
    return 0;
}
