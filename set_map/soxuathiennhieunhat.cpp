#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    map<long long, int> mp;
    for (int i = 1; i <= a; i++)
    {
        long long x;
        cin >> x;
        mp[x]++;
    }
    long long res, max = INT_MIN;
    for (auto it : mp)
    {
        if (it.second > max)
        {
            max = it.second;
            res = it.first;
        }
    }
    cout << res << " " << max;
}