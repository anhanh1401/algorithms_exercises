#include <bits/stdc++.h>
using namespace std;
int main()
{
    // tam giác vuông cân góc dưới trái
    /*int a; cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {cout<<"*";}
    cout<<endl;
    }*/
    // tam giác vuông cân góc trên trái
    int a;
    cin >> a;
    for (int i = a; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    // tam giác vuông cân dưới phải
    /*int a; cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {   if(j<=a-i) cout<<" ";
            else cout<<"*";}
        cout<<endl;
    }*/
    // tam giác vuông cân trên phải
    /*int a; cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {   if(j<i) cout<<" ";
            else cout<<"*";} cout<<endl;
    }*/
    // tam giác rỗng vuông cân dưới trái
    /*int a; cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {   if( j==1 || i==a || i==j ) cout<<"*";
            else cout<<" ";}
        cout<<endl;
    }*/
    // tam giác cân chiều cao a
    /*int a; cin>>a;
    for(int i=1;i<=a;i++)
    //cách 1
    {
        //tạo dấu cách
        for(int j=1;j<=a-i;j++)
        {  cout<<" ";}
        //tạo dấu *
        for(int j=1;j<=2*i-1;j++)
        {  cout<<"*";}
        cout<<endl;
    }*/
    /*cách 2
    {
        for(int j=1;j<=a+i-1;j++)
        {   if(j<=a-i) cout<<" ";
            else cout<<"*";}
            cout<<endl;
    }*/
    // tam giác cân rỗng cao a
    /*{
        //tao dau cach
        for(int j=1; j<=a-i;j++)
            {   cout<<" ";}
        //tao dau *
        for(int j=1;j<=2*i-1;j++)
        {
            if( i==1 || i==a || j==1 || j==2*i-1)
                cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }*/
    // tam giác cân ngược không rỗng
    //      int a; cin>>a;
    //      for(int i=1;i<=a;i++)
    //      {
    //          for(int j=1;j<i;j++)
    //          { cout<<" ";}
    //          for(int j=1;j<=2*(a-i+1)-1;j++)
    //          {cout<<"*"; }
    //          cout<<endl;
    //      }
    //  }
