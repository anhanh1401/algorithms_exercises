#include <bits/stdc++.h>
using namespace std;
void selection(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min_pos])
                min_pos = j;
        swap(a[i], a[min_pos]);
    }
}
void bubble(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = a[i];
        for (int j = 0; j <= n - i - 1; j++)
            if (a[j] >= a[j + 1])
                swap(a[j], a[j + 1]);
    }
}
void insertion(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = a[i];      //xét lần lượt phần tử với a[vitri]
        int vitri = i - 1; //đặt vị trí tại trước số đang xét
        while (vitri >= 0 && x < a[vitri])
        {
            a[vitri + 1] = a[vitri];
            --vitri;
        }
        a[vitri + 1] = x;
    }
}

// int cnt[10000001];
// void counting(int a[], int n)
// {
//     int n;
//     int a[n];
//     int m = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         m = max(m, a[i]);
//     }
//     for (int i = 0; i <= m; i++)
//     {
//         if (cnt[i] != 0)
//             for (int j = 0; j < cnt[i]; j++)
//                 cout << i << " ";
//     }
// }

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    selection(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    bubble(a, n);
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    insertion(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}