#include <bits/stdc++.h>
using namespace std;
int main()
{
// con voi có thể bước 1,2,3,4,5 bước tìm số bước ít nhất
    int n; cin>>n;
    int dem=n/5;
    int du=n%5;
    cout<< dem + 1;
// số ngày mang vớ 2 màu và cùng màu
    int a,b; cin>>a>>b; cout<<endl;
    if(a>b) cout<<b<<" "<<(a-b)/2;
    else cout<<a<<" "<<(b-a)/2;
    return 0;
}