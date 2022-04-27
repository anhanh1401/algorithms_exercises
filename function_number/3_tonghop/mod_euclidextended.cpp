#include <bits/stdc++.h>
using namespace std;
// (A +-x B) mod M = (A mod M +-x B mod M) mod M
// (A mũ B mod M) = ((A mod M) mũ B ) mod M
const int MOD = (int)1e9 + 7;
typedef long long ll;
#if 0
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll res = 1;
    for (int i = 0; i < n; i++)
    {
        res *= a[i];
        res %= MOD;
    }
    cout << res % MOD;
}
#endif
//  ax+by = gcd(a,b)   tìm x,y đến khi b=0 => g.1+0.0=g
//  b.x1 + (a mod b).y1 =  b.x1 +  (a- [a/b].b).y1
#if 1
int x, y, d;
void extended(int a, int b)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        d = a;
    }
    else
    {
        extended(b, a % b);
        int tmp = x;
        x = y;
        y = tmp - a / b * y;
    }
}
int main()
{
    int a = 55, b = 80;
    extended(a, b);
    cout << "ucln=" << d << endl;
    cout << x << " " << y << endl;
    // in ra d=5 và x=3 y=-2  vì 55.3 + 80.-2=5
}
#endif