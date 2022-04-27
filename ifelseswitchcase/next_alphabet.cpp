#include <bits/stdc++.h>
using namespace std;
int main()
{
/*
a-z : 97 - 122
A-Z : 65 - 90
0-9 : 48 -57
in ra kí tự tiếp theo in thường*/
    char a; cin>>a;
    if(a=='z'||a=='Z') cout<<'a';
    if(a>='a'&&a<='y') cout<<a;
    if(a>='A'&&a<='B') {a+=32;} ++a;
    cout<<a;
}