#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int aa[a];
        for (int &x : aa)
        {
            cin >> x;
        }
        map<int, bool> mp; //set<int> s;
        for (int i = 1; i <= b; i++)
        {
            int y;
            cin >> y;
            mp[y] = true; //s.insert(y);
        }
        bool ok = false;
        for (int x : aa)
        {
            if (mp.find(x) == mp.end())
            {
                cout << x << " ";
                ok = true;
            }
        }
        // ok=false
        if (!ok)
            cout << "not found\n";
    }
}