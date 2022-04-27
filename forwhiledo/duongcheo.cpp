#include <bits/stdc++.h>
using namespace std;
int main()
{
    // chu nhat: tam giac * goc duoi phải
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i > j)
                cout << "*";
            else
                cout << "~";
        }
        cout << endl;
    }
    // tam giac ~ duoi + hinh binh hanh *
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "~";
        }
        for (int j = 0; j < b; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}