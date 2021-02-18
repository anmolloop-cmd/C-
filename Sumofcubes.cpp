#include <bits/stdc++.h>
using namespace std;
#define long long long int
bool sumofcubes(long n)
{
    if ((int)(cbrt(n)) == cbrt(n))
        return 0;
    long j = (long)(cbrt(n));
    for (long i = j; i >= 1; i--)
    {
        double K = cbrt(n - pow(i, 3));
        if ((int)(K) == K)
            return 1; //
    }
    return 0;
}
int main()
{
    long T;
    cin >> T;
    while (T--)
    {
        long N;
        cin >> N;
        if (sumofcubes(N))
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}