#include <bits/stdc++.h>
using namespace std;
int n, k, ans = 0, t;
main()
{
    ios_base::sync_with_stdio(false); //disables sync between c and c++
    cin.tie(NULL);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (t % k == 0)
            ans++;
    }
    cout << ans;
}