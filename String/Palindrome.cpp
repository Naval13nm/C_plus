#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    string s="abba";
    int st=0;
    int end=s.size()-1;
while(st<end)
    {
        if (s[st]==s[end])
        {
            st++;
            end--;
        }
        else{
            cout<<"not pal";
            return 0;
        }
        
    }
    cout<<"pal";
    
    return 0;
}