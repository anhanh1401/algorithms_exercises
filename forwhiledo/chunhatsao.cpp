#include <bits/stdc++.h>
using namespace std;
int main()
{
// vuông đặc
    /*int n; cin>>n;
    for(int i=1;i<=n;i++)
    {for(int j=1;j<=n;j++)
    {cout<<"*";}
    cout<<endl;}*/
// vuông rỗng
    /*int n; cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {if( i==1 || j==1 || i==n || j==n) cout<<"*";
        else cout<<" ";}
        cout<<endl;
    }*/
// chữ nhật rỗng
    int a,b; cin >> a >> b;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {if( i==1 || i==a || j==1 || j==b ) cout<<"*";
        else cout<<" ";}
        cout<<endl;
    }
}