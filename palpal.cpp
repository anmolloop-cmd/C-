#include <bits/stdc++.h>
#define long long long int
using namespace std;
int main()
{
    long T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        map<char, int> hash;
        for (long i = 0; i < S.length(); i++)
        {
            hash[S[i]]++;
        }
        long even = 0;
        long odd = 0;
        for (auto x : hash)
        {
            if (x.second % 2 == 0)
                even++;
            else
                odd++;
        }
        long diff = odd - even;
        if (diff >= 1&&odd%2!=0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}