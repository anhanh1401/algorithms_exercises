#include <bits/stdc++.h>
using namespace std;
int kt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1; // điều kiện n>1 thì return 1;
}
int prime[1000001];
void sieve()
{
    for (int i = 1; i <= 1000000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
                prime[j] = 0;
        }
    }
}
int digitPrime(int n)
{
    while (n)
    {
        int r = n % 10;
        // if(r==2 || r==3 || r==5 ||r==7)
        if (r != 2 && r != 3 && r != 5 && r != 7)
            return 0;
        n /= 10;
    }
    return 1;
}
int main()
{
    int a;
    cin >> a;
    // if(kt(a)) cout<<"Y\n"; else cout<<"NO\n";
    // sieve();
    /* ktra sàngnt
        for(int i=0;i<=a;i++)
            if(prime[i]) cout<<i<<" ";
        return 0;*/

    /* số nguyên số với a bộ test
        while (a--)
        {
            int n; cin>>n;
            if(prime[n]) cout<<"yes";
            else cout<<"no";
        }*/

    // đếm số nguyên tố và chữ số của nó cx nto
    while (a--)
    {
        int b, c;
        cin >> b >> c;
        int cnt = 0;
        for (int i = b; i <= c; i++)
        {
            if (kt(i) && digitPrime(i))
                ++cnt;
        }
        cout << cnt << " ";
    }
}