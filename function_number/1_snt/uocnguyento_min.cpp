#include <bits/stdc++.h>
using namespace std;
// in ra ước nguyên tố nhỏ nhất từ 1 đến a
//  dùng sàng biến đổi
int find(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return i;
    }
    return a;
}
int prime[100001];
void sang()
{
    for (int i = 1; i <= 100000; i++)
        prime[i] = i;
    for (int i = 2; i <= sqrt(100000); i++)
    {
        if (prime[i] == i)
        {
            for (int j = i * i; j <= 100000; j += i)
            {
                if (prime[j] == j)
                    prime[j] = i;
            }
        }
    }
}
int main()
{
    sang();
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        for (int i = 1; i <= a; i++)
        {
            // cout << find(i) << " ";
            cout << prime[i] << " ";
        }
    }
}