#include <bits/stdc++.h>
using namespace std;
// đếm số 0 liên tiếp từ cuối của n!
// sô lần xuất hiện 10=2x5 của n! vì 5 luôn xuất hiện ít hơn 2 ...
int count(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i *= 5)
        res += n / i;
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << count(n) << " ";
    }
}