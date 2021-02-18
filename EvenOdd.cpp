#include <bits/stdc++.h>
using namespace std;
void Watermelon(int N)
{
    if (N == 2)
        cout << "NO";
    else if (N % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    int W;
    cin >> W;
    Watermelon(W);
}