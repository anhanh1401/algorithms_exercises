#include <bits/stdc++.h>
using namespace std;
// in ra số fibo nhỏ  hơn 1000 trong dãy
/*int f[1001];
void ktao()
{
    int fibo[20];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 20; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    for (int i = 0; fibo[i] <= 1000; i++)
    {
        f[fibo[i]] = 1;
    }
}
int main()
{
    ktao();
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        int b[a];
        for (int i = 0; i < a; i++)
            cin >> b[i];
        for (int i = 0; i < a; i++)
        {
            if (f[b[i]])
                cout << b[i] << " ";
        }
        cout << endl;
    }
}*/

// hiệu 2 số lớn nhất theo thứ tự inpput
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int min1 = a[0], res = -1e9;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > min1)
            res = max(res, a[i] - min1);
        min1 = min(a[i], min1);
    }
    if (res == -1e9)
        cout << "-1\n";
    else
        cout << res;
}