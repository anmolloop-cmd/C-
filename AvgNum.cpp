#include <bits/stdc++.h>
#define long long long int
using namespace std;
long N;
int main()
{
    cin >> N;
    long A[N];
    for (long i = 0; i < N; i++)
        cin >> A[i];
    long S = 0;
    for (long i = 0; i < N; i++)
        S += A[i];
    double avg = (double)S / N;
    cout << avg;
}