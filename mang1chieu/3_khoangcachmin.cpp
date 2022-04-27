#include <bits/stdc++.h>
using namespace std;
//3_ khoang cach nho nhat giua 2 so trong mang
/*int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int res = INT_MAX;
    for (int i = 1; i < n; i++) // i=0 neu 2 vong for
    {
        // for (int j = i + 1; j < n; j++)
        // {
        //     if (abs(a[i] - a[j]) < res)
        //         res = abs(a[i] - a[j]);
        // }
        res = min(res, a[i] - a[i - 1]);
    }
    cout << res;
}*/

//4_ liet ke k phan tu lon nhat
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<int>());
        for (int i = 0; i < k; i++)
            // for (int i = k - 1; i >= 0;i--)
            cout << a[i] << " ";
    }
    return 0;
}