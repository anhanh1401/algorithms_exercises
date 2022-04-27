#include <bits/stdc++.h>
#include <cmath> //sqrt/round/abs...
using namespace std;
// string result = (time < 18) ? "Good day." : "Good evening.";
/*int kt(string s)
{
    int l = 0, r = s.length();
    while (l <= r)
    {
        if (s[l] == s[r])
            return 0;
        --r;
        ++l;
    }
    return 1;
}
int main()
{
    int x, y;
    //x = 100; y = x ++; cout << x << y;
    //x = 100, y = ++x; cout << x << y;
    string s;
    getline(cin, s);
    if (kt(s))
        cout << "yes";
    else
        cout << "no";
}*/
/*int main()
{
    string s2, s1;
    getline(cin, s1);
    cin.ignore();
    getline(cin, s2);
    int cnt[256] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        cnt[s1[i]] = 1;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if (cnt[s2[i]])
        {
            cnt[s2[i]] = 2;
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if (cnt[i] == 2)
            cout << char(i);
    }
}*/
#define ten 5 + 5

int main()
{
    cout << ten * ten << endl;
}
