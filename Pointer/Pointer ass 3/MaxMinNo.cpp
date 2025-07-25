#include <iostream>
using namespace std;

void findMaxMin(int *a, int *b, int *max, int *min) {
    if (*a > *b) {
        *max = *a;
        *min = *b;
    } else {
        *max = *b;
        *min = *a;
    }
}

int main() {
    int a = 12, b = 25, max, min;
    findMaxMin(&a, &b, &max, &min);
    cout << "Maximum: " << max << ", Minimum: " << min << endl;
    return 0;
}
