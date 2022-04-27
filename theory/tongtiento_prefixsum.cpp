#include <bits/stdc++.h>
using namespace std;
// tổng các phần tử từ l đến r
// prefix[i] tổng các giá trị từ vị trí 1 đến i
// prefix[i][j] tổng tất cả phần tử của hcn từ hàng 1 => i và cột 1 => j
// prefix[i][j] = p[i-1][j]+p[i][j-1]-p[i-1][j-1]+a[i][j]
// p[A][B] - p[a-1][B] - p[A][b-1] + p[a-1][b-1]
// hàng a và A đến cột b và B
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int &x : a)
        cin >> x;
    int prefix[n + 1] = {0}; // prefix lưu từ 1->n+1 không phải 0 đến n
    int pre[n + 1][m + 1] = {0};
    for (int i = 1; i <= n; i++)
        prefix[i] = prefix[i - 1] + a[i - 1];
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
    }
    return 0;
}