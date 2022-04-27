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
        getline(cin, s);
        stringstream ss(s);
        string word;
        /*set<string> se;
        while (ss >> word)
            se.insert(word);
        cout << se.size();*/
        map<string, int> mp;
        while (ss >> word)
            mp[word] = 1;
        cout << mp.size();
    }
}