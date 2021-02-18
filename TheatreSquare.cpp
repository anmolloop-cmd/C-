#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void Pavement(int l, int b, int s)
{
    long long a, c;
    if ((l % s == 0))
        a = l / s;
    else
        a = l / s + 1;
    if ((b % s == 0))
        c = b / s;
    else
        c = b / s + 1;
    printf("%I64d",a*c);
}
int main()
{
    int x, y, s;
    cin >> x >> y >> s;
    Pavement(x, y, s);
}