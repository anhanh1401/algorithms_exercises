#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    // set
    /*   {
        int a;
        cin >> a;
        int b[a];
        set<int> s;
        for (int &x : b)
        {
            cin >> x;
            s.insert(x);
        }
        int m;
        cin >> m;
        while (m--)
        {
            int c;
            cin >> c;
            if (s.count(c) != 0) // if(s.find(c)!=s.end())
                cout << "yes"<<endl;
            else
                cout << "no"<<endl;
        }
    }
*/
    //map
    {
        int a;
        cin >> a;
        map<int, bool> m;
        for (int i = 1; i <= a; i++)
        {
            int b;
            cin >> b;
            m[b] = true;
        }
        int c;
        cin >> c;
        while (c--)
        {
            int d;
            cin >> d;
            if (m.count(d) == 1)
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }
}