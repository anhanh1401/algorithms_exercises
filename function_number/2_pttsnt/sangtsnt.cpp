#include <bits/stdc++.h>
using namespace std;
int prime[100001];
void sieve()
{
    for (int i = 1; i <= 100000; i++)
        prime[i] = i;
    for (int i = 2; i <= sqrt(100000); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 100000; j += i)
            {
                if (prime[j] = j)
                {
                    prime[j] = i;
                }
            }
        }
    }
}
void pt(int n)
{
    while (n != 1)
    {
        int cnt = 0;
        int tmp = prime[n]; //nguyemto nho nhat
        while (n % tmp == 0)
        {
            ++cnt;
            n /= tmp;
        }
        cout << tmp << 'x' << cnt << " ";
    }
    cout << endl;
}
int main()
{
    sieve();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        pt(a);
    }
}