#include <bits/stdc++.h>
#define long long long int
using namespace std;
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        if (k == 0)
            cout << n << "\n";
        else
        {
            long a = n / k - 1;
            long q = ceil(a);
            if (a == q)
                a = a + 1;
            cout << n - a * k << "\n";
        }
    }
}