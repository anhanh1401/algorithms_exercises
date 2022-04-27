#include <bits/stdc++.h>
using namespace std;
// phân tích thừa số nt
void ptnt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            while (n % i == 0)
            {
                // cout << i;
                n /= i;
            }
        }
    }
    if (n != 1)
        cout << n;
    cout << endl;
}
void ptnt2(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        int cnt = 0;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                ++cnt;
                n /= i;
            }
            cout << i << 'x' << cnt << " ";
        }
    }
    if (n != 1)
        cout << n << "x1";
    cout << endl;
}
void ptnt3(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i;
            n /= i;
            if (n != 1)
                cout << "x";
        }
    }
    if (n != 1)
        cout << n;
    cout << endl;
}
// phan tích 4: in ra 2^2 * 3^1 *5^1
void ptnt4(int n)
{

    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        if (n % i == 0)
        {
            cout << i << "^";
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            cout << cnt;
            if (n != 1)
                cout << "*";
        }
    }
    if (n != 1)
        cout << n << "^1";
}
int main()
{
    int n;
    cin >> n;
    ptnt(n);
    ptnt2(n);
    ptnt3(n);
    ptnt4(n);
}
