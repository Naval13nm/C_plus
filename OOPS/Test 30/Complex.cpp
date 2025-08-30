#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    float real;
    float img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(float r, float i)
    {
        real = r;
        img = i;
    }

    Complex operator*(Complex &obj)
    {
        return Complex(real * obj.real, img * obj.img);
    }
    void display()
    {
        cout << real << "+i" << img << "\n";
    }
};

int main()
{
    Complex c1(2, 5), c2(3, 2);
    c1.display();
    c2.display();
    Complex c3 = c1 * c2;
    c3.display();
}
