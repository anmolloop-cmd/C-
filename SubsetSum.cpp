#include <iostream>
using namespace std;
int count;
bool issubset(int w[], int n, int sum)
{
    if (sum == 0)
    {
        count++;
        return 1;
    }
    if (n == 0)
        return 0;
    if (w[n - 1] <= sum)
    {
        bool a = (issubset(w, n - 1, sum - w[n - 1]) || issubset(w, n - 1, sum));
        if (a)
            count++;
        return a;
    }
    if (w[n - 1] > sum)
    {
        bool b = issubset(w, n - 1, sum);
        if (b)
            count++;
        return b;
    }
}
int main()
{
    count = 0;
    int W[] = {6, 2, 4, 1, 5, 3};
    cout << issubset(W, 6, 6) << "\n";
    cout << count;
    return 0;
}
