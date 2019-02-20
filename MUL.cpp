#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int n = 10000;
int main()
{
    cin >> n;
    int t;
    unsigned long long int tich = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        tich *= t;
        tich =(tich%1000000007);
    }
    printf("%lld", tich);
}