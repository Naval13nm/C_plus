#include<iostream>
using namespace std;

int main() {
    float bill;
    cout << "Enter bill amount (₹): ";
    cin >> bill;

    if (bill >= 500) {
        float discounted = bill - (bill * 0.10);  // 10% discount
        cout << "Discounted Bill: ₹" << discounted << endl;
    } else {
        cout << "No Discount: ₹" << bill << endl;
    }

    return 0;
}
