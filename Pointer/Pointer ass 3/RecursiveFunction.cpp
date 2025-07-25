#include <iostream>
using namespace std;

int factorial(int *n) {
    if (*n == 0 || *n == 1)
        return 1;
    int temp = *n - 1;
    return (*n) * factorial(&temp);
}

int main() {
    int num = 5;
    cout << "Factorial: " << factorial(&num) << endl;
    return 0;
}
