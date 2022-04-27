#include <bits/stdc++.h>
using namespace std;
int main()
// chuẩn hóa tên 1
/*{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    string word1 = "", word2 = "";
    while (ss >> word)
    {

        word1 = toupper(word[0]);
        for (int i = 1; i < word.length(); i++)
        {
            if (islower(word[i]))
                word2 += word[i];
            else
                word2 += tolower(word[i]);
        }
        cout << string(word1) + string(word2) << " ";
        word1 = "";
        word2 = "";
    }
}*/

//chuẩn hóa tên 2
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        string word1 = "", word2 = "";
        vector<string> v;
        while (ss >> word)
        {
            word1 = toupper(word[0]);
            for (int i = 1; i < word.length(); i++)
            {
                word2 += tolower(word[i]);
            }
            v.push_back(word1 + word2);
            word1 = "";
            word2 = "";
        }
        cout << v.back() << ",";
        for (vector<string>::iterator it = v.begin(); it != v.end() - 1; it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}
