#include <bits/stdc++.h>
using namespace std;
// tìm x lớn nhất để n! chia hết p mũ x
int count(int n, int p)
{
    int ans = 0;
    for (int i = p; i <= n; i += p)
    {
        int tmp = i;
        while (tmp % p == 0)
        {
            ++ans;
            tmp /= p;
        }
    }
    return ans;
}
int count2(int n, int p)
{
    int ans = 0;
    for (int i = p; i <= n; i *= p)
    {
        ans += n / i;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << count(a, b);
    }
}