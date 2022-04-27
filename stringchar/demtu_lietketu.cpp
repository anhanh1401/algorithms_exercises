#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // getline(cin, s);
    // stringstream ss(s);
    // int cnt = 0;
    // string tmp1;
    // while (ss >> tmp1)
    // {
    //     cnt++;
    // }
    // cout << cnt;

    //12 đếm số lần xuất hiện từ trong xâu theo thứ tự xuất hiện
    // string s, s1;
    // getline(cin, s);
    // string w;
    // vector<string> v, v1;
    // map<string, int> mp;
    // for (int i = 0; i < s.length(); i++)
    //     s1 += tolower(s[i]);
    // stringstream ss(s1);
    // while (ss >> w)
    // {
    //     v.push_back(w);
    // }
    // for (auto x : v)
    // {
    //     mp[x]++;
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (mp[v[i]] != 0)
    //     {
    //         cout << v[i] << " " << mp[v[i]] << endl;
    //         mp[v[i]] = 0;
    //     }
    // }

    //13 đếm từ in theo thứ tự từ điển
    // string s, s1;
    // getline(cin, s);
    // string w;
    // map<string, int> mp;
    // for (int i = 0; i < s.length(); i++)
    //     s1 += tolower(s[i]);
    // stringstream ss(s1);
    // while (ss >> w)
    // {
    //     mp[w]++;
    // }
    // for (auto x : mp)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }

    //14 in các từ trong câu
    // string

    //16 laoị bỏ từ
    string s, s1;
    getline(cin, s);
    getline(cin, s1);
    string w;
    vector<string> v;
    stringstream ss(s);
    while (ss >> w)
    {
        v.push_back(w);
    }
    int dem = 0;
    for (vector<string>::iterator it = v.begin(); it != v.end(); it++)
    {
        if (*it != s1)
        {
            cout << *it << " ";
        }
    }
}
