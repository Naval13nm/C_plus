#include<bits/stdc++.h>
using namespace std;
class Base
{
public:
int pub=1;
int priv=2;
int prot=3;
};

class mid:private Base
{
// public:
//     int pub = 1;
// private:
//     int priv = 2;
// protected:
//     int prot = 3;
};

class DerivedClass : public mid
{
    public:
      void show()
      {
          cout<<"Public in dervied:"<<pub<<"\n";
        //   cout<<"private in dervied:"<<priv<<"\n";
          cout<<"protected in dervied:"<<prot<<"\n";
      }
};
int main()
{
    DerivedClass derobj;
    derobj.show();
  
}