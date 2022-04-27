#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
//tong binh phuong tu 1 den n
    long long res= 1ll* n*(n+1)*(2*n+1)/6;
//tong 1/1.2+1/2.3+...+1/n.(n+1)
    //double res= 1 - 1.0 / (n+1);
//tong 2+4+...+2*n
    //long long res = 1ll * n * (n+1);
//tong -1+2-3+4-...+(-1)n
    /*if(n % 2 ==0) 
        cout << n / 2;
    else
        cout << (-1-n) / 2;*/
    cout<<fixed<<setprecision(2)<<res;
    return 0;
}