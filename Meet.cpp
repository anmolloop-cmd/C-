#include <string.h>
#include <iostream>
using namespace std;
int meet(int hrs, int min, int hrsl, int minl, int hrsr, int minr)
{
    if (hrsl < hrs && hrsr > hrs)
        return 1;
    if (hrsl == hrsr && hrsr == hrs)
    {
        if (minl <= min && minr >= min)
            return 1;
        else
            return 0;
    }
    if ((hrsl == hrs && minl <= min) || (hrsr == hrs && minr >= min))
        return 1;
    else
        return 0;
}
int convert_hrs(string P)
{
    int hrs = ((int)(P[0]) - 48) * 10 + ((int)(P[1]) - 48);
    if (P[5] == 'A' && hrs == 12)
        hrs = 12 - hrs;
    if (P[5] == 'P' && hrs != 12)
        hrs = 12 + hrs;
    else
        return hrs;
    return 0;
}
int convert_min(string P)
{
    int min = ((int)(P[3]) - 48) * 10 + ((int)(P[4]) - 48);
    return min;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string P;
        getline(cin,P,'$');
        int N;
        cin >> N;
        string K[N],T[N];
        for(int i=0;i<N;i++)
        {
        getline(cin,K[i],'$');
        getline(cin,T[i],'$');
        }
    }
}