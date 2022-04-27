#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // char c[1000];
    // gets(c);
    //dem so luong ki tu
    /*   
    int cnt = 0, cnt1 = 0;
    for (int i = 0; i < strlen(c); i++)
    {
        if (isalpha(c[i]))
            ++cnt;
        else if (isdigit(c[i]))
            ++cnt1;
    }
    cout << cnt << cnt1 << strlen(c) - cnt - cnt1;
*/

    //dem so luogn ki tu xuat hien trong xau
    /*
    int cnt[256] = {0};
    for (int i = 0; i < strlen(c); i++)
    {
        cnt[c[i]]++;
        // thêm vào mảng cnt số kí tự
    }
    for (int i = 0; i < 256; i++)
    {
        if (cnt[i] != 0)
        {
            cout << char(i);
            cout << " " << cnt[i];
            cout << endl;
        }
    }
*/

    // chu cai cung so lan xuat hien theo thu tu cua no
    int cnt[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        cnt[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (cnt[s[i]] != 0)
        {
            cout << s[i];
            cout << " " << cnt[s[i]];
            cout << endl;
            cnt[s[i]] = 0;
        }
    }

    // ki tu xuat hien nhieu nhat
    /*int cnt[26] = {0};
    int dem = 0;
    char kt;
    for (int i = 0; i < strlen(c); i++)
    {
        cnt[c[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] >= dem)
        {
            dem = cnt[i];
            kt = i + 'a';
        }
    }
    cout << char(kt) << " " << dem;*/
}