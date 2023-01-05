#include <bits/stdc++.h>
using namespace std;

string encode(string src)
{
    // Your code here
    string ans = "";
    int n = src.size();
    for (int i = 0; i < n; i++)
    {
        char temp = src[i];
        int count = 0;
        while (i < n && temp == src[i])
        {
            count++;
            i++;
        }
        i--;
        ans += temp + to_string(count);
    }
    return ans;
}