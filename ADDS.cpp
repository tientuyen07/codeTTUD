#include <bits/stdc++.h>
#include <iostream>

using namespace std;
long long A, B, M;
long long sum = 0;
int main()
{
    cin >> A >> B >> M;
    if (A > B)
    {
        return 0;
    }
    for (int i = A; i <= B; i++)
    {
        sum = i * i + sum;
    }
    cout << sum % (M) << endl;
}