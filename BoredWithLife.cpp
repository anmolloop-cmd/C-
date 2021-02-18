#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void fact(int k)
{
    long long f = 1;
    for (int j = k; j >= 1; j--)
        f *= j;
    cout << f;
}
void GCD(int A, int B)
{
    int k = min(A, B);
    fact(k);
}
int main()
{
    int x;
    int y;
    cin >> x;
    cin >> y;
    GCD(x, y);
}