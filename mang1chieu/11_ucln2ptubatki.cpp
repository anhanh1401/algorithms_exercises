#include <bits/stdc++.h>
using namespace std;
// O(logn)
const int maxn = 1000;
int a[maxn];
map<int, int> m;
void solve(int n)
{
    for (int i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            m[i]++;
            if (i != n / i)
                m[n / i]++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        solve(a[i]);
    }
    int res = 1;
    for (auto x : m)
    {
        if (x.second >= 2)
            res = x.first;
    }
    cout << res;
}
// O(n^2)
/*int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
const int maxn = 1000;
int a[maxn];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int res = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
                res = max(res, gcd(a[i], a[j]));
        }
        cout << res << endl;
    }
    return 0;
}*/