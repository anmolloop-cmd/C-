#include <bits/stdc++.h>
#define long long long int
using namespace std;
int main()
{
    long w, h, n;
    cin >> w;
    cin >> h;
    cin >> n;
    char ch[n];
    long k[n];
    for (long i = 0; i < n; i++)
    {
        cin >> ch[i] >> k[i];
    }
    vector<long> s1;
    vector<long> s2;
    s1.push_back(h);
    s2.push_back(w);
    for (long i = 0; i < n; i++)
    {
        if (ch[i] == 72)
        {
            vector<long>::iterator ptr;
            ptr = s1.begin();
            long S = 0;
            while (*ptr + S < k[i])
            {
                S += *ptr;
                ptr++;
            }
            long f = *ptr;
            s1.erase(ptr);
            long T = k[i] - S;
            s1.insert(ptr, T);
            s1.insert(ptr + 1, f - T);
            long a = *max_element(s1.begin(), s1.end());
            long b = *max_element(s2.begin(), s2.end());
            cout << a * b << "\n";
            vector<long>::iterator ptr2;
        }
        if (ch[i] == 86)
        {
            vector<long>::iterator ptr1;
            ptr1 = s2.begin();
            long S1 = 0;
            while (*ptr1 + S1 < k[i])
            {
                S1 += *ptr1;
                ptr1++;
            }
            long f = *ptr1;
            s2.erase(ptr1);
            long T = k[i] - S1;
            s2.insert(ptr1, T);
            s2.insert(ptr1 + 1, f - T);
            long a = *max_element(s1.begin(), s1.end());
            long b = *max_element(s2.begin(), s2.end());
            cout << a * b << "\n";
        }
    }
}