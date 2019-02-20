#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int mang[40], n;
// m[] mang luu khoi luong cuc vang, n cuc vang max = 40
int MAX;
int dem = 1;
void duyetcachoanvi(int i, int sum)
{
    if (i <= n)
    {
        // chay den cuoi de duyet tu cuoi tro ve
        duyetcachoanvi(i + 1, sum);
    }
    else
    {
        // duyet het n gia tri thi quay lai duyet cac hoan vi khac
        return;
    }
    if (sum + mang[i] <= MAX)
    {
        dem++;
        // Duyet tiep phan tu tiep theo cua mang
        duyetcachoanvi(i + 1, sum + mang[i]);
    }
}

main()
{
    cin >> n;
    cin >> MAX;
    for (int i = 1; i <= n; ++i)
    {
        cin >> mang[i];
    }
    duyetcachoanvi(1, 0);
    cout << dem << endl;
    return 0;
}
