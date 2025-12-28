#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    // string s = "Hello how are you?";
  
    // int st =0;
    // int end = 0;
    // int i=0;
   

    // while(i<=s.size())
    // {
    //     if (end<s.size()&&s[end]!=' '){

    //         end++;
    //     }
            
    //     else{
    //         reverse(s.begin()+st,s.begin()+end);
    //         end++;
    //         st=end;
    //     }
    //     i++;
    // }

    // cout << s<< endl;
    


    //2nd easy way

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
