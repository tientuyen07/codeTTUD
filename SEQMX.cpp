#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

double n;
double a[100000];
double k;
double tbcmax(double *a, double n)
{
    double kq = 0.0000000;

    for (int i = 0; i < n; i++)
    {
        double sum = 0.0;
        for (int m = i; m < i + k-1; m++)
        {
            sum += (double)a[m];
        }
        // cout << sum << endl;
        for (int j = i + k - 1; j < n; j++)
        {
            sum = sum + (double)a[j];
            // if (j >= i + k - 1)
            // {
            double tbc = sum / (double)(j - i + 1);
            // cout << "i = " << i << ";j = " << j << "; sum = " << sum << endl;
            // printf("%.5f", tbc);
            // cout<<endl;
            if (tbc > kq)
            {
                kq = tbc;
            }
            // }
        }
    }
    return kq;
}
int main()
{
    scanf("%lf", &n);
    scanf("%lf", &k);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    printf("%.5f", tbcmax(a, n));
}

// #include <bits/stdc++.h>
// #include <iostream>
// #include <stdio.h>
// #include <stdlib.h>

// using namespace std;

// double a[100000];
// double k;
// double tinhtbc(double *a, double n)
// {
//     double kq = 0.0000000;

//     for (int i = 0; i < n; i++)
//     {
//         double sum = 0.0;
//         for (int j = i; j < n; j++)
//         {
//             sum = sum + (double)a[j];
//             if (j >= i + k - 1)
//             {
//                 double tbc = sum / (double)(j - i + 1);
//                 if (tbc > kq)
//                 {
//                     kq = tbc;
//                 }
//             }
//         }
//     }
//     return kq;
// }
// int main()
// {
//     double n;
//     scanf("%lf", &n);
//     scanf("%lf", &k);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     printf("%.5f", tinhtbc(a, n));
// }