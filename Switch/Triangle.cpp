#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3;
    cout << "Enter three angles of the triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    int sum = angle1 + angle2 + angle3;

    if (sum != 180 || angle1 <= 0 || angle2 <= 0 || angle3 <= 0) {
        cout << "Not a valid triangle" << endl;
    }
    else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        cout << "Right-angled Triangle" << endl;
    }
    else if (angle1 > 90 || angle2 > 90 || angle3 > 90) {
        cout << "Obtuse Triangle" << endl;
    }
    else {
        cout << "Acute Triangle" << endl;
    }

    return 0;
}
