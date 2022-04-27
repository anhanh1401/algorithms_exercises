#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string word;
    map<string, int> mp;
    stringstream ss(s);
    while (ss >> word)
    {
        mp[word]++;
    }
    int fre = 0;
    string res;
    for (auto it : mp)
    {
        if (it.second > fre)
        {
            fre = it.second;
            res = it.first;
        }
    }
    cout << res;
}