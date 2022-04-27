#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        cin >> s;
        map<string, int> mp;
        if (mp.find(s) == mp.end())
        {
            cout << s << endl;
        }
        else
            cout << s << mp[s] << endl;
        mp[s]++;
    }
}