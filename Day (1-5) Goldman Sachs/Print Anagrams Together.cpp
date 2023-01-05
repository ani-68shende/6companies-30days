#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> Anagrams(vector<string> &string_list)
    {
        // code here
        map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for (auto x : string_list)
        {
            string temp = x;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(x);
        }
        for (auto x : mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};