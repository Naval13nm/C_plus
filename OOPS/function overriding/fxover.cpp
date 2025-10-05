#include<bits/stdc++.h>
using namespace std;
class Base
{
    public:
      int a;
      int b;
      int c;
    Base(int a=0,int b=0,int c=0)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void show()
    {
        cout<<"I am show from base class:";
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
};
class derivedClass : public Base
{
    private:
      int d;
      int e;
      int f;
    public:
    derivedClass(int d=0,int e=0,int f=0)
    {
        this->d=d;
        this->e=e;
        this->f=f;
    }
    void setdataofbase(int aa=0,int bb=0,int cc=0)
    {
        a=aa;
        b=bb;
        c=cc;
    }
    void show()
    {
        cout<<"I am show from derived class :";
        cout<<d<<" "<<e<<" "<<f<<"\n";
        cout<<"From derivedClass accessing base class variables:\n";
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
};
int main()
{
    Base baseobj(17,18,20);
    baseobj.show();
    derivedClass derobj;
    // derivedClass derobj(1,2,3);
    derobj.setdataofbase(4,56,8); //1st method
    derobj.show();
    derobj.Base::show(); // 2nd method
}


// through derobj we want to provide values to the datamemebers of base class.
//through derobj we want to access the same name function from base class.