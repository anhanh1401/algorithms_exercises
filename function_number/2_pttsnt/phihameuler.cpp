#include <bits/stdc++.h>
using namespace std;
// đếm số lượng các số nguyên tố cùng nhau với n không vượt quá n
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long count(long long n) // số bé
{
    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        if (gcd(i, n) == 1)
            ++res;
    }
    return res;
}
// phi hàm euler công thức = n.tích (1-1/p)
// 60=2^2.3.5 => cnt = 60.(1-1/2).(1-1/3).(1-1/5) = 16
#define ll long long
ll phi(ll n)
{
    ll res = n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            res -= res / i;
        }
    }
    if (n != 1)
        res -= res / n;
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << phi(n);
}