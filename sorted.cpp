#include <bits/stdc++.h>
#define long long long int
using namespace std;
main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n, greater<int>());
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
}