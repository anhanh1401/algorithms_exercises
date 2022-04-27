#include <bits/stdc++.h>
using namespace std;
// in ra mảng có giá trị bằng vị trí, nếu không có giá trị in ra -1
/*using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<ll, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (m[i] == 1)
                cout << i << " ";
            else
                cout << "-1 ";
        }
        cout << endl;
    }
}*/

// số nhỏ nhất chưa xuất hiện
int cnt[1000001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        memset(cnt, 0, sizeof(cnt));
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
                cnt[x] = 1;
        }
        for (int i = 1; i <= 1000001; i++)
        {
            if (cnt[i] == 0)
            {
                cout << i;
                break;
            }
        }
        cout << endl;
    }
}