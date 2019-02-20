#include <bits/stdc++.h>
#include <iostream>

using namespace std;
long long n = 100000;
long long a[100000];
long long M;
int main()
{
    cin >> n >> M;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] <= M)
                ++dem;
        }
    }
    cout << dem;
}