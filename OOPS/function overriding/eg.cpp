#include<bits/stdc++.h>
using namespace std;
class base {
public:
   void notice(int a,int b){
      cout<<"Base Class"<<a<<b<<"\n";
   }
};
class derived: public base {
   public:
      void notice(int a){
        cout<<"Derived Class"<<a<<"\n";
      }
};
int main () {
   // creating an object for base class and calling it
//    base b;
//    b.notice(4);  
   // creating an object for derived class and calling it
   derived d ;
   
   d.notice(4,5);    
}