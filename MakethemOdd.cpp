#include <bits/stdc++.h>
#define long long long int
using namespace std;
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        set<int, greater<int>> s1;
        long n;
        long count = 0;
        cin >> n;
        long A[n];
        for (long i = 0; i < n; i++)
            cin >> A[i];
        for (long i = 0; i < n; i++)
            if (A[i] % 2 == 0)
                s1.insert(A[i]);
        set<int, greater<int>>::iterator itr, T;
        T = s1.end();
        for (itr = s1.begin(); itr != T; itr++)
        {
            long K = *itr;
            while (K % 2 == 0)
            {
                count++;
                K = K / 2;
                s1.erase(K);
            }
        }
        cout << count << "\n";
    }
}