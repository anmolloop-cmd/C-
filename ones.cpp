#include <bits/stdc++.h>
using namespace std;
#define long long long int
int Digits(long N)
{
    long K = (int)(log10(N));
    return K + 1;
}
int Generator(int J)
{
    long P = (pow(10, J) - 1) / 9;
    return P;
}
int main()
{
    int count = 0;
    long N;
    cin >> N;
    while (N > 0)
    {
        cout << "\n\n"
             << N << "\n";
        int t = Digits(N);
        cout << t << "\n";
        long a = Generator(t);
        cout << a << "\n";
        long b = Generator(t - 1);
        cout << b << "\n";
        long c = N - a;
        cout << c << "\n";
        long d = b - N;
        cout << d << "\n";
        if (c < d)
        {
            N = N - a;
            count = count + t;
        }
        else
        {
            N = b - N;
            count = count + t + 1;
        }
    }
    cout << count;
}