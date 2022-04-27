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
        set<string> se;
        vector<string> v;
        string word;
        while (ss >> word)
            v.push_back(word);
        for (auto x : v)
        {
            if (se.find(x) != se.end())
            {
                cout << x << endl;
                break;
            }
            se.insert(x);
        }
    }
}