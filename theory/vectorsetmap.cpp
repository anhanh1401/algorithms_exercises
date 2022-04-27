#include <bits/stdc++.h>
using namespace std;
int main()
{ // cin.ignore(); xoas 1 ki tu trong bo nho dem
        // vector<int> v;
        // v.push_back(10);
        // v.push_back(20);
        // v.push_back(30);
        // cout << v[2] << endl;
        // v.begin()
        // v.end()
        // for (int i = 1; i <= v.size();i++)
        //     cout << v[i];
        // for(int x:v)
        //     {cout << x;}
        // for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        //     cout << *it << endl;
        // for (auto it = v.begin(); it != v.end();++it)
        //     cout << *it << endl;
        // cout << *(v.begin() + 2) << endl;
        // int n;
        // vector<int> v(n);    //vector co sẵn số phần tử
        // vector<int> v(n, 100);   // các giá trị trong vector là 100
        //     string s = " ngon ngu lap trinh java";
        //     stringstream ss(s);
        //     string tmp;
        //     vector<string> v;
        //     while (ss >> tmp)
        //     {
        //         v.push_back(tmp);
        //     }
        //     for (string x : v)
        //     {
        //         cout << x << endl;
        //     }
        //     return 0;
        // }

        // pair<datatype1, datatype2> v;
        // v.first
        // v.second
        // make_pair(a,b) == {}
        // pair<pair<int, int>, int> v == tuple
        // int main()
        // {
        //     pair<int, int> v = {100,200};
        //     cout << v.first << endl;
        //     tuple<int, int, int> t{1, 2, 3};
        //     cout << get<0>(t)<<endl;
        //     return 0;
        // }

        // set khhong luu cac phan tu giong nhau, cac pham tu deu rieng biet
        /*        set<int> s;
        s.insert(300);
        s.insert(100);
        s.insert(300);
        s.insert(100);
        cout << s.size() << endl; // size=3
        for (int i = 0; i < 10; i++)
        {
                s.insert(i);
        }
        //s.count dem so luong trong set
        if (s.count(5) != 0)
                cout << "found" << endl;
        else
                cout << "not found";
        // s.find tim gia tri neu khong thay tra ve s.end
        if (s.find(5) != s.end())
                cout << "found";

        s.erase(s.find(5));
        for (auto x : s)
        {
                cout << x << " ";
        }

       cout << *s.begin() << endl;  //ptu dau tien
        cout << *s.rbegin() << endl; //ptu cuoi cung
}*/
        // multiset<int> ms;
        // ms.insert(100);
        // ms.insert(100);
        // ms.insert(200);
        // ms.insert(100);
        // ms.erase(100);//xoas heets cac phan tu 100

        //unordered_set<int> s; //khong sap xep tang dan

        map<int, int> mp;
        mp[100] = 200; // cặp số 100,200
        mp[200] = 300;
        mp.insert({300, 200});
        mp.insert({300, 300}); // không được nhận vì 1 key chỉ xuất hiện 1 lần trong map
        for (pair<int, int> x : mp)
        {
                cout << x.first << " " << x.second << endl;
        }
        for (auto it : mp)
        {
                cout << it.first << " " << it.second << endl;
        }
}