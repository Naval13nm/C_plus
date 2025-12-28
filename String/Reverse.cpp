#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    string s="abc";
    string r;
   
    for (int i = s.size()-1; i >=0; i--)
    {
        r.push_back(s[i]);
    }
    for(auto x:r){
        cout<<x;
    }
    
    
    return 0;
}