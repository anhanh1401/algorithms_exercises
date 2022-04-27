#include <bits/stdc++.h>
using namespace std;
// chia hết cho 1 số và chia hết cho bình phương của số nguyên tố đó
int sodep(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt >= 2)
            return 1;
    }
    return 0;
}
int sodep2(int n)
{
    int ok = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt == 1)
            return 0;
        if (cnt >= 2)
            ok = 1;
    }
    if (n != 1)
        return 0;
    return ok;
}
// chia hết cho 1 số nguyên tố thì cũng chia hết cho bình phương số đó
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (sodep(i))
            cout << i << " ";
        if (sodep2(i))
            cout << i << " ";
    }
}