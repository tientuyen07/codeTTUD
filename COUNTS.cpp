#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int S;
int a[100000];

int demdaycon(int *a, int n)
{
    int dem = 0;

    for (int i = 0; i < n; i++)
    {
        double sum = 0.0;
        for (int j = i; j < n; j++)
        {
            sum = sum + (double) a[j];
            double tbc =  sum / (double) (j - i + 1);

            if (tbc <= S)
            {
                dem++;
            }
        }
    }
    return dem;
}
int main()
{
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    scanf("%d", &S);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << demdaycon(a, n);
    free(a);
    return 0;
}