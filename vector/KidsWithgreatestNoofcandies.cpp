// 1431. Kids With the Greatest Number of Candies

// There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

// Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

// Note that multiple kids can have the greatest number of candies.

// Example 1:

// Input: candies = [2,3,5,1,3], extraCandies = 3
// Output: [true,true,true,false,true]
// Explanation: If you give all extraCandies to:
// - Kid 1, they will have 2 + 3 = 5 candies, which is the greatest among the kids.
// - Kid 2, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
// - Kid 3, they will have 5 + 3 = 8 candies, which is the greatest among the kids.
// - Kid 4, they will have 1 + 3 = 4 candies, which is not the greatest among the kids.
// - Kid 5, they will have 3 + 3 = 6 candies, which is the greatest among the kids.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    vector<bool> ans;

    // vector<bool> ans(candies.size()); if i intialized the size of vector and then perform push_back so as we have not assigned it value it will take zero by default and add new values after those zeros for eg above elements size are 5 so v={0,0,0,0,0} it will add push_back(1 or 0 ) after this zeroes so over output will became wrong that's why then if we wants to use pushback then we use reserve it will not ass them zero value whoese sytex will be :

    ans.reserve(candies.size());
    // note this line want declared during declartions of a vector means:
    // vector<bool> ans.reserve(candies.size()); [X] (this will be wrong)

    // finding max no of candies
    int Candiescount = 0;
    for (auto x : candies)
    {
        Candiescount = max(Candiescount, x);
    }

    // can also find max element from vector using stl

    // int maxx=*max_element(candies.begin(),candies.end());

    for (auto x : candies)
    {
        if (x + extraCandies >= Candiescount)
        {
            ans.push_back(1); // true
        }
        else
        {
            ans.push_back(0); // false
        }
    }
    //   cout << boolalpha;                          //to get output as true or false we use this
    //   cout << noboolalpha;                       //to get output again in 1 and 0 we use this(by default)
    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}