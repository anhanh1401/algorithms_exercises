#include <bits/stdc++.h>
using namespace std;
// gcd(a,b)=gcd(b,a-b)
#define ll long long
ll gcd(ll a, ll b)
{
    // if (a == 0 || b == 0)
    //     return a + b;
    // while (a != b)
    // {
    //     if (a > b)
    //         a = a - b;
    //     else
    //         b = b - a;
    // }
    // return a;
    while (b != 0)
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
}

int main()
{
}