#include <bits/stdc++.h>
using namespace std;
int check(char c[])
{
    int l = 0, r = strlen(c) - 1;
    while (l < r)
    {
        if (c[l] != c[r])
            return 0;
        ++l;
        ++r;
    }
    return 1;
}
// ktra có thể thay đổi 1 kí tự thành palindrome không
int check2(char c[])
{
    int l = 0, r = strlen(c) - 1;
    int cnt = 0;
    while (l, r)
    {
        if (c[l] != c[r])
            ++cnt;
        ++l;
        ++r;
    }
    if (strlen(c) % 2 == 1 && cnt <= 1)
        return 1;
    if (strlen(c) % 2 == 0 && cnt == 1)
        return 1;
    return 0;
}
int main()
{
    char c[1000];
    gets(c);
    if (check2)
        cout << "yes";
    else
        cout << "no";
}