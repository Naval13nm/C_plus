#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
   
   vector<int> v = {1, 1, 2, 2, 2, 2, 3};
    int count = 1;
      
    for (int i = 0; i < v.size(); i++)
    {
         for (int j =i+1; j <v.size(); j++)
         {
            if (v[j] == v[i])
            {
                count++;
            }
         }
         

        if (count > v.size() / 2)
        {
             cout<<v[i];
             return 0;
        }
    }
    

    return 0;
}