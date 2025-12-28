#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{

  string s = "HiH";
  string m=s;
  string a=s;
  string b=s;

  // for (auto x : s)
  // {
  //   x = tolower(x);
  //   cout << x;    //just prints the value not changed the real value 
  // }

  for (int i = 0; i < m.size(); i++)
  {
    m[i]=tolower(m[i]);

  }

  cout<<m<<endl;

    for (int i = 0; i < a.size(); i++)
  {
    a[i]=toupper(a[i]);

  }

  cout<<a<<endl;

  b[0]=toupper(b[0]);
  for(int i=1; i<b.size(); i++){
    b[i]=tolower(b[i]);
  }

  cout<<b<<endl;


  if (s==m||s==a||s==b)
  {
    cout<<"true";
  }

  else{
    cout<<"False";
  }
  
  

  return 0;
}