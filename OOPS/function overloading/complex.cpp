#include<bits/stdc++.h>
using namespace  std;
class Complex
{
private:
    float real;
    float img;
public:
    Complex(){
        real=0;
        img=0;
    }
    Complex(float r,float i){
        real=r;
        img=i;
    }
    // for addition
    Complex operator+(Complex &obj){
        return Complex(real + obj.real,img + obj.img);
    }
    //for subtraction
    Complex operator-(Complex &obj){
        return Complex(real - obj.real,img - obj.img);
    }
    //for multiplication
    Complex operator*(Complex &obj){
        return Complex(real * obj.real,img * obj.img);
    }
    void display(){
        cout<<real<<"+i"<<img<<"\n";
    }
};

int main(){
    Complex c1(1,5),c2(1,2);
    c1.display();
    c2.display();
    Complex c3=c1+c2;
    c3.display();
    Complex c4=c1-c2;
    c4.display();
    Complex c5=c1*c2;
    c5.display();
}
