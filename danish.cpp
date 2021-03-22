#include <bits/stdc++.h>
#define long long long int
using namespace std;
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long A[11], K;
        for (int i = 1; i <= 10; i++)
            cin >> A[i];
        cin >> K;
        long S = 0;
        int i = 10;
        while (S + A[i] <= K)
        {
            S = S + A[i];
            i--;
        }
        cout << i << "\n";
    }
}