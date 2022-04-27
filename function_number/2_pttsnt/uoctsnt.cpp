#include <bits/stdc++.h>
using namespace std;
// đếm số ước qua pttsnt
// n=p1^e1.p2^e2.p3^e3...pk^ek  // thừa số nguyên tố
// d(n)=(e1+1)(e2+1)...(ek+1)   // công thức số ước của n
int count(int n)
{
    int res = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            ++cnt;
            n /= i;
        }
        res *= (cnt + 1);
    }
    if (n != 1)
        // nếu n!=1 -> là số nguyên tố cuối cùng -> 1+1=2
        res *= 2;
    return res;
}
// tổng ước của 1 số
int count2(int n)
{
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i != n / i)
            {
                sum += i + n / i;
            }
            else
                sum += i;
        }
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << count(n) << endl;
    cout << count2(n);
}