// LIFO last in first out
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int tong(int n)
{
    if (n == 1)
        return 1;           // bai toan nho nhat
    return n + tong(n - 1); // LIFO cong thuc de quy
}
int tongbp(int n)
{
    if (n == 1)
        return 1;
    return n * n + tongbp(n - 1);
}
int giaithua(int n)
{
    if (n == 0)
        return 1;
    return n * giaithua(n - 1);
}
int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}
int scs(int n)
{
    if (n < 10)
        return 1;
    return 1 + scs(n / 10);
}
int daonguoc(int n)
{
}
int main()
{
    int n;
    cin >> n;
    // cout << tong(n) << " " << tongbp(n) << endl;
    // cout << giaithua(n) << endl;
    // cout << fibo(n) << endl;
    // cout << scs(n) << endl;
    cout << daonguoc(n) << endl;
    return 0;
}