#include <bits/stdc++.h>
using namespace std;
int main()
{
    //17+18 có trong xâu 1 mà không có ở xâu 2
    // int n;
    // cin >> n;
    // cin.ignore();
    // while (n--)
    // {
    //     string a, b;
    //     getline(cin, a);
    //     getline(cin, b);
    //     map<string, int> mp;
    //     stringstream ss(a);
    //     stringstream sss(b);
    //     while (ss >> a)
    //         mp[a] = 1;
    //     while (sss >> b)
    //         mp[b] = 2;
    //     for (auto x : mp)
    //     {
    //         if (x.second == 1)
    //             cout << x.first << " ";
    //     }
    // }

    //19 xóa từ khỏi xâu nhiều bộ test
    // int n;
    // cin >> n;
    // cin.ignore();
    // int dem = 0;
    // while (n--)
    // {
    //     string s, s1;
    //     getline(cin, s);
    //     getline(cin, s1);
    //     dem++;
    //     cout << "#TEST " << dem;
    //     string w;
    //     vector<string> v;
    //     stringstream ss(s);
    //     while (ss >> w)
    //     {
    //         v.push_back(w);
    //     }
    //     for (vector<string>::iterator it = v.begin(); it != v.end(); it++)
    //     {
    //         if (*it != s1)
    //         {
    //             cout << *it << " ";
    //         }
    //     }
    // }

    //20 từ lặp đầu tiên trong xâu
    // int n;
    // cin >> n;
    // cin.ignore();
    // int dem = 0;
    // while (n--)
    // {
    //     string s, s1;
    //     getline(cin, s);
    //     dem++;
    //     cout << "#TEST " << dem;
    //     string w;
    //     vector<string> v;
    //     map<string, int> mp;
    //     stringstream ss(s);
    //     int dem1 = 0;
    //     while (ss >> w)
    //     {
    //         v.push_back(w);
    //         mp[w]++;
    //         if (mp[w] == 2 && dem1 == 0)
    //         {
    //             cout << w;
    //             dem1++;
    //         }
    //     }
    //     if (dem1 == 0)
    //         cout << "-1";
    // }

    // 21 tìm xâu b trong xâu a
    // string a, b;
    // getline(cin, a);
    // getline(cin, b);
    // map<string, int> mp;
    // if (a.find(b) != string::npos)
    //     cout << "yes";
    // else
    //     cout << "NO";

    // 23 kí tự không lặp
    string a;
    cin >> a;
    map<char, int> mp;
    vector<char> v;
    for (auto x : a)
    {
        mp[x]++;
        v.push_back(x);
    }
    for (auto x : v)
    {
        if (mp[x] == 1)
            cout << x;
    }
}