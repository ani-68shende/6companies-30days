#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSubArrayProductLessThanK(const vector<int> &a, int n, long long k)
    {
        long long product = 1;
        int i = 0;
        int j = 0;
        long long count = 0;
        while (j < n)
        {
            product *= a[j];
            if (product >= k)
            {
                while (i < n && product >= k)
                {
                    product /= a[i];
                    i++;
                }
            }
            count += j - i + 1;
            j++;
        }
        return max(1LL * 0, count);
    }
};