#include <iostream>
#include <cstring>
using namespace std;
int PrimeSeive(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
    }
    int count=0;
    for (int i = n; i >= 2; i--)
    {
        if (prime[i])
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    long X;
    long Y;
    cin >> X;
    cin >> Y;
    int count=1;
    long K=PrimeSeive(X);
    while(X!=1||X!=0)
    {
    K=PrimeSeive(X-K);
    count++;
    X=X-K;
    }
    if(count%2==0)
    cout<<"Divyam"<<"\n";
    else
    cout<<"Chef"<<"\n";
    }
}