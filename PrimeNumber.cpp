#include <iostream>
#include <cmath>
using namespace std;
int N;
int Prime(int K)
{
    int T = sqrt(K);
    for (int i = 2; i <= T; i++)
    {
        if (K % i == 0)
            return 0;
    }
    return 1;
}
main()
{
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 1)
            cout << arr[i] << " is neither Prime nor Composite\n";
        else if (Prime(arr[i]))
            cout << arr[i] << " is Prime\n";
        else
            cout << arr[i] << " is not Prime\n";
    }
}