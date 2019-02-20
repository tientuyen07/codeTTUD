#include <bits/stdc++.h>
#include <iostream>

using namespace std;

long long f(long long n)
{
    if (n == 1)
    {
        return 0;
    }
    return (f(n - 1) + ((n - 1) * n) / 2) % (1000000000 + 7);
}

int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = (i * (n - i)) + sum;
    }
    cout << sum % (1000000000 + 7) << endl;
    cout << f(n) << endl;
}