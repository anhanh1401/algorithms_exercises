#include<bits/stdc++.h>
using namespace std;
int main()
{
// kiểm tra năm nhuận 
/*    int n; cin>>n;
    if(n<0) cout<<"INVALID";
    else if((n%4==0 && n%100==0) || n%400==0)
    cout<<"YES";
    else cout<<"NO";
    return 0;*/
// số ngày của tháng năm
/*    int a,b; cin>>a>>b;
    if((a<1 || a>12) || (b<0))
    cout<<"INVALID\n";
    else{
        if(a==1 || a==3|| a==5 ||a==7||a==8||a==10||a==12) cout<<"31";
        else if( a==4 || a==6 || a==9 || a==11) cout<<"30";
        else
        {
            if((b%4==0 && b%100==0) || b%400==0) cout<<"29";
            else cout<<"28";
        }
    }  
    return 0;
}*/
// nhập số ngày in ra ngày tháng năm
    int n; cin>>n;
    int nam=n/365;
    int du = n % 365;
    int tuan = du / 7;
    int ngay = du % 7;
    cout<< nam << ' ' << tuan << ' ' << ngay;
    return 0;
}

