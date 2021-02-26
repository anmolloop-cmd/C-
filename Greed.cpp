#include <bits/stdc++.h>
#define long long long int
using namespace std;
bool Check(long left[], long cap[], long n)
{
    long S = 0;
    for (long i = 0; i < n; i++)
        S += left[i];
    sort(cap, cap + n);
    if (S <= cap[n - 1] + cap[n - 2])
        return 1;
    else
        return 0;
}
int main()
{
    long n;
    cin >> n;
    long A[n], B[n];
    for (long i = 0; i < n; i++)
        cin >> A[i];
    for (long i = 0; i < n; i++)
        cin >> B[i];
    if (Check(A, B, n))
        cout << "YES\n";
    else
        cout << "NO\n";
}