#include <bits/stdc++.h>
using namespace std;

int main()


{
    //cann't handle negative no bcz if negative no comes it multiplication gives postive so it will came largrst but 
    // vector<int> v = {1, 2, 3,33,1,33,55};
    // int largest=INT_MIN;
    // int SecLar=INT_MIN;

    // for(auto x:v){
    //     if(x>largest){
    //         SecLar=largest;
    //         largest=x;
    //     }
    //     if(x<largest&& x>SecLar){
    //         SecLar=x;
    //     }
    // }
    // if(SecLar!=INT_MIN){
    //     cout<<largest*SecLar;
    // }
   

    // to handle negative values also

    vector<int> v = {-6, -8, 3,1};
    sort(v.begin(),v.end());
    int first=v[0]*v[1];
    int second=v[v.size()-1]*v[v.size()-2];
    int product=max(first,second);
    cout<<product;
    
    return 0;
}
