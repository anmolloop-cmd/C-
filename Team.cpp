#include <bits/stdc++.h>
using namespace std;
int count(vector<string> S, int N)
{
    int count = 0;
    vector<char> ch;
    vector<string> F;
    vector<string>::iterator t;
    for (t = S.begin(); t < S.end(); t++)
    {
        string K = *t;
        ch.push_back(K[0]);
    }
    vector<char>::iterator ptr, ip;
    ip = std::unique(ch.begin(), ch.end());
    ch.resize(std::distance(ch.begin(), ip));
    for (ptr = ch.begin(); ptr < ch.end(); ++ptr)
    {
        for (t = S.begin(); t < S.end(); ++t)
        {
            string K = *t;
            string T = *ptr + K.substr(1, K.length());
            vector<string>::iterator it;
            it = std::find(S.begin(), S.end(), T);
            if (it == S.end())
                F.push_back(T);
        }
    }
    vector<string>::iterator p;
    p = std::unique(F.begin(), F.end());
    F.resize(std::distance(F.begin(), p));
    int J = F.size();
    return J * (J - 1);
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<string> S;
        string str;
        char c;
        cin >> c;
        getline(cin, str);
        str = c + str;
        string word = "";
        for (auto x : str)
        {
            if (x == ' ')
            {
                S.push_back(word);
                word = "";
            }
            else
            {
                word = word + x;
            }
        }
        S.push_back(word);
        cout << count(S, N) << "\n";
    }
}
