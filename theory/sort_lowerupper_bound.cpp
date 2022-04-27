#include <bits/stdc++.h>
using namespace std;
int main()
// áp dụng cho mang da xap sep
// upper_bound(iter1, iter2, key) [iter1, iter2) => trả về vị trí đầu tiên của phần tử > key
// lower_bound(iter1, iter2, key) [iter1, iter2) => trả về vị trí phần tử đầu tiên >=key
// nếu các phần tử đều nhỏ hơn key => trả về iter2
{
    int n, x;
    cin >> n >> x;
    //int a[n];
    vector<int> a(n);
    // pair <int,int> a[n]; for(auto it:a)  cout<<it.first;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    //auto it = lower_bound(a, a + n, x);
    auto it = upper_bound(a.begin(), a.end(), x);
    if (it == a.end())
        cout << "khong co ptu nao lon hon x";
    else
    {
        cout << *it << endl;                     // giá trị >=x
        cout << it - a.begin() << endl;          // vị trí của x đầu tiên
        cout << distance(a.begin(), it) << endl; //cũng là vị trí - đếm từ a.begin đến vị trí it;
    }
}

// sort(a, a+n) , sort(a+x, a+y) => a[x;y-1]
// sort(a.begin(), a.end(), greater<int>()) xếp giảm dần
// stable_sort()  sắp xếp giữ nguyên vị trí ban đầu nếu giá trị abs bằng nhau