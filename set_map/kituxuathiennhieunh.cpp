#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    map<char, int> mp;
    for (char x : s)
    {
        mp[x]++;
    }
    int max = 0;
    string res;
    for (auto it : mp)
    {
        if (it.second > max)
        {
            max = it.second;
            res = it.first;
        }
    }
    cout << res;
}