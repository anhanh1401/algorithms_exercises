#include <bits/stdc++.h>
using namespace std;
int prime1(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int prime[10001];
void sangnt()
{
    for (int i = 1; i <= 10000; i++)
        prime[i] = 1;
    prime[1] = prime[0] = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < 1000; j += i)
                prime[j] = 0;
        }
    }
}
int cs(int n)
{
    while (n--)
    {
        int a = n % 10;
        if (a == 2 || a == 3 || a == 5 || a == 7)
            return 1;
        n /= 10;
    }
    return 0;
}
int tong(int n)
{
    int s = 0;
    while (n--)
    {
        s += n % 10;
        n /= 10;
    }
    // if(prime1(s)) return 1;return 0;
    return prime1(s);
}
int main()
{
    // in ra a số nguyên tố đầu
    /*   int a; cin>>a;
    int dem=0, i=0;
    while(dem<a)
    {
        if(prime1(i)) {cout<<i<<" "; ++dem;}
        ++i;
    }*/
    // 7 cặp số nguyên tố có tổng = n chẵn
    /*    int a; cin>>a;
    while(a--)
    {
        int n; cin>>n;
        sangnt();
        for(int i=2;i<=n/2;i++)
        {
            if(prime[i] && prime[n-i]) {cout<<i<<" "; cout<<n-i;cout<<endl;}
        }
    }*/
    // số thuần nguyên tố
    int a;
    cin >> a;
    while (a--)
    {
        int dem = 0;
        int b, c;
        cin >> b >> c;
        for (int i = b; i <= c; i++)
        {
            if (cs(i) && prime1(i) && tong(i))
                dem++;
        }
        cout << dem << endl;
    }
}