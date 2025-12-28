#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    

    string s = "Hello how are you?";
  
    int st = 0;
    int end = 0;
    int n = s.size();

    while (end <= n)
    {
        if (end == n || s[end] == ' ')
        {
            reverse(s.begin() + st, s.begin() + end);
            st = end + 1;
        }
        end++;
    }

    cout << s << endl;



    return 0;
}
