#include <bits/stdc++.h>
using namespace std;
bool checked(string S, int N)
{
    bool c1 = false;
    bool c2 = false;
    bool c3 = false;
    bool c4 = false;
    if (N < 10)
        return false;
    for (int i = 1; i < N - 1; i++)
    {

        if (S[i] >= 97 && S[i] <= 122)
            c1 = true;
        if (S[i] >= 65 && S[i] <= 90)
            c2 = true;
        if (S[i] >= 48 && S[i] <= 57)
            c3 = true;
        if (S[i] == 64 || S[i] == 35 || S[i] == 37 || S[i] == 38 || S[i] == 63)
            c4 = true;
    }
    if (S[0] >= 97 && S[0] <= 122)
        c1 = true;
    if (S[N - 1] >= 97 && S[N - 1] <= 122)
        c1 = true;
    if (c1 && c2 && c3 && c4)
        return true;
    else
        return false;
}
int main()
{
    long T;
    cin >> T;
    while (T--)
    {

        string S;
        cin >> S;
        if (checked(S, S.length()))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}