#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float a[n];
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i] / n;
    }
    cout << fixed << setprecision(12) << double(sum);

    return 0;
}