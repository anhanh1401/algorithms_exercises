#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin >> a >> b;
// số nguyên nhỏ nhất không vượt quá a và chia hết cho b
    // cout<< (a / b) * b; 
// số lớn hơn a nhỏ nhất và chia hết cho b
    cout << (a + b -1) / b * b;
    return 0;
}