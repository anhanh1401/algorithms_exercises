#include <bits/stdc++.h>
using namespace std;
// mang
/*
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n != 0)
    {
        string s;
        getline(cin, s);
        int a[26] = {0};
        for (char x : s)
        {
            a[tolower(x) - 'a'] = 1;
        }
        int cnt = 0;
        for (int i = 0; i < 26; i++)
            cnt += a[i];
        if (cnt == 26)
            cout << "yes";
        else
            cout << "no";
    }
}*/

//set
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n != 0)
    {
        string s;
        getline(cin, s);
        set<char> se;
        for (char x : s)
            se.insert(tolower(x));
        if (se.size() == 26)
            cout << "ys";
        else
            cout << "NO";
    }
}
