#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s, s1;
        getline(cin, s);
        string word, w1, w2;
        vector<string> v, v1;
        for (int i = 0; i < s.length(); i++)
            s1 += tolower(s[i]);
        stringstream ss(s1);
        while (ss >> word)
            v.push_back(word);
        for (auto it : v)
        {
            it.erase(it.begin() + 1, it.end());
            w1 += it;
        }
        w1.pop_back();
        cout << v.back() + w1 << "@gmail.com";
        cout << endl;
        cout << w1 + v.back() << "@gmail.com" << endl;
    }
    return 0;
}