#include <bits/stdc++.h>
using namespace std;
bool sumofcubes(long n)
{
    for (long i = 1; i * i * i < n; i++)
    {
        double K = cbrt(n - pow(i, 3));
        if ((int)(K) == K)
            return 1;
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