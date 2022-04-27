#include <bits/stdc++.h>
using namespace std;
int dao(int n)
{
    if (n == 0)
        return 1;
    return dao(n - 1) * (dao(n - 1) - 1);
}
int main()
{
    int n = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (i % 3 == 0 || i % 8 == 0)
            n++;
    }
    cout << n;
    return 0;
}