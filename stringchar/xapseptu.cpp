#include <bits/stdc++.h>
using namespace std;
int main()
// sắp xếp theo thứ tự chiều dài
{
    string s;
    getline(cin, s);
    multiset<string> se;
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        se.insert(word);
    }
    multimap<int, string> mp;
    for (auto it : se)
    {
        mp.insert({it.size(), it});
    }
    for (auto it : mp)
        cout << it.second << endl;
}

// sắp xếp từ theo thứ tự từ điển
/*{
    string s;
    getline(cin, s);
    multiset<string> se;
    stringstream ss(s);
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        se.insert(word);
        cnt++;
    }
    for (multiset<string>::iterator it = se.begin(); it != se.end(); it++)
    {
        cout << *it << endl;
    }
}*/

// sắp xếp các kí tự theo từ điển
/*{
    string s;
    getline(cin, s);
    multiset<char> se;
    for (int i = 0; i < s.length(); i++)
    {
        se.insert(s[i]);
    }
    for (multiset<char>::iterator it = se.begin(); it != se.end(); it++)
        cout << *it;
}*/