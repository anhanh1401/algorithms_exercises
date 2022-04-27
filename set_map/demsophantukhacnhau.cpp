#include <bits/stdc++.h>
using namespace std;
int main()
{
    //set
    /*    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        set<int> s;
        for (int i = 1; i <= a; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        cout << s.size();
    }
*/
    //map
    /*    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        map<int, int> mp;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            mp[x] = 1;
        }
        cout << mp.size();
    }
*/

    //mảng
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        int b[a];
        for (int &x : b)
            cin >> x;
        sort(b, b + a);
        // sắp xếp mảng b tăng dần từ phần tử 0 đến phần tử a-1
        int ans = 1;
        for (int i = 1; i < a - 1; i++)
        {
            if (b[i] != b[i + 1]) // !=b[i-1]
                ans++;
        }
        cout << ans;
    }
}