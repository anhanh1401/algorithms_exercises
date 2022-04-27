#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int sum1 = 0, sum2 = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum2 += a[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            sum1 += a[i];
            if (sum2 - sum1 == sum1 - a[i])
            {
                cnt++;
                cout << i << endl;
            }
        }
        if (cnt == 0)
            cout << "-1";
    }
}
