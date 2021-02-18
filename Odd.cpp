#include <bits/stdc++.h>
#include <string>
#define ll long long int
using namespace std;
void Check(ll n, ll k)
{

    if ((n + k) % 2 == 0 && n >= k * k)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ll T, n, k;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        Check(n, k);
    }
}