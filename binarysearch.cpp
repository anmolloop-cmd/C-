#include <bits/stdc++.h>
#define long long long int
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n], key[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < k; i++)
        cin >> key[i];
    for (int i = 0; i < k; i++)
    {
        if (binary_search(arr, arr + n, key[i]))
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}