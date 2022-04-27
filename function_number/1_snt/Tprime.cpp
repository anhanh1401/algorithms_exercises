#include <bits/stdc++.h>
using namespace std;
int prime[1001];
void sieve()
{
    for (int i = 0; i <= 1000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(1000); i++)
        if (prime[i])
        {
            for (int j = i * i; j < 1000; j += i)
                prime[j] = 0;
        }
}
int main()
{
    // số có đúng 3 ước là bình phương của một số nguyên tố và đếm
    sieve();
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        int dem = 0;
        for (int i = 1; i <= sqrt(a); i++)
        {
            if (prime[i])
            {
                cout << i * i << " ";
                dem++;
            }
        }
        cout << endl;
        cout << dem;
    }

    // đếm số tprime từ a đến b
    /*    sieve();
    long long a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = sqrt(a); i <= sqrt(b); i++)
    {
        if (prime[i] && 1ll * i * i > a)
            cnt++;
    }
    cout << cnt;
*/
}
