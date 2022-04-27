#include <bits/stdc++.h>
using namespace std;
// xâu pangram1 không phân biệt hoa thường
int pangram(char c[])
{
    int cnt[26] = {0};
    strlwr(c);
    for (int i = 0; i < strlen(c); i++)
    {
        cnt[c[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] == 0)
            return 0;
    }
    return 1;
}
int main()
{
    // in ra kí tự xuất hiện ở cả 2 xâu
    /*    
    char c2[1000], c1[1000];
    gets(c1);
    gets(c2);
    int cnt[256] = {0};
    for (int i = 0; i < strlen(c1); i++)
    {
        cnt[c1[i]] = 1;
    }
    for (int i = 0; i < strlen(c2); i++)
    {
        if (cnt[c2[i]])
        {
            cnt[c2[i]] = 2;
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if (cnt[i] == 2)
            cout << char(i);
    }
*/
    // xuất hiện xâu 1 nhưng không xâu 2
    // dòng 19: cnt[c2[i]]=0;

    // xuất hiện trong xâu 1 hoặc xâu 2
    // xóa 17 và dòng 19: cnt[c2[i]]=1;
    char c[1000];
    gets(c);
    if (pangram(c))
        cout << "YES";
    else
        cout << "NO";
}