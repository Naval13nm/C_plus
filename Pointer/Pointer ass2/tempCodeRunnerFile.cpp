
using namespace std;

int main() {
    int *p = new int;  // Memory allocated on heap
    *p = 100;
    cout << *p << endl;

    // Forgot to use delete p;  (Memory leak)
    // Memory is still occupied, but we lost access if pointer goes out of scope
    return 0;
}
