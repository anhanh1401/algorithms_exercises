#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[500][500];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    // map<int, int> mp;
    // int max1 = a[0][0];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         // if(a[i][j]>=max1)
    //         //     max1 = a[i][j];
    //         max1 = max(max1, a[i][j]);
    //     }
    // }
    // cout << max1 << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (max1 == a[i][j])
    //             cout << "vi tri: " << i + 1 << " " << j + 1 << endl;
    //     }
    // }
    int max1 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = 0; j < m; j++)
        {
            s += a[i][j];
        }
        max1 = max(s, max1);
    }
    cout << max1 << endl;
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = 0; j < m; j++)
        {
            s += a[i][j];
        }
        if (s == max1)
            cout << i + 1 << " ";
    }
}
