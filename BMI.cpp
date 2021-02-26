#include <bits/stdc++.h>
#define long long long int
using namespace std;
int Calculate(long M, long H)
{
    float BMI = M / pow(H, 2);
    if (BMI <= 18)
        return 1;
    if (BMI >= 19 && BMI <= 24)
        return 2;
    if (BMI >= 25 && BMI <= 29)
        return 3;
    if (BMI > 30)
        return 4;
}
int main()
{
    long T;
    cin >> T;
    while (T--)
    {
        long H, M;
        cin >> M >> H;
        cout << Calculate(M, H) << "\n";
    }
}