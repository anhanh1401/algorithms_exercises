#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a < b;
}
bool bs(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            return true;
        }
        else if (a[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return false;
}
bool bs1(int a[], int l, int r, int x)
{
    if (l > r)
        return false;
    int m = (l + r) / 2;
    if (a[m] == x)
        return true;
    else if (a[m] < x)
        return bs1(a, m + 1, r, x);
    else
        return bs1(a, l, m - 1, x);
}
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a, a + n);
    // if (bs1(a, 0, n - 1, x))
    if (binary_search(a, a + n, x))
        cout << "Found!";
    else
        cout << "Not Found!";
}