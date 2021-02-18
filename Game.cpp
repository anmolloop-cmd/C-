#include <bits/stdc++.h>
using namespace std;
void game(int X[], int Y[], int x, int y, int n)
{
    int i = 0;
    int j = 0;
    vector<int> A;
    while (i < x && j < y)
    {
        
        if(X[i]==Y[j])
        {
        cout<<X[i];
        A.push_back(X[i]);
        i++;
        j++;
        }
        else
        if (X[i] < Y[j])
        {
            cout<<X[i];
            A.push_back(X[i]);
            i++;
        }
        else
        {
            cout<<Y[j];
            A.push_back(Y[j]);
            j++;
        }
    }
    while (i < x)
    {
        cout<<X[i];
        A.push_back(X[i]);
        i++;
    }
    while (j < y)
    {
        cout<<Y[j];
        A.push_back(Y[j]);
        j++;
    }
    cout<<"  "<<A.capacity()<<"\n";
    if (A.capacity() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}
int main()
{
    int x, y, n;
    cin >> n;
    cin >> x;
    int X[x];
    for (int i = 0; i < x; i++)
        cin >> X[i];
    sort(X, X + x);
    cin >> y;
    int Y[y];
    for (int i = 0; i < y; i++)
        cin >> Y[i];
    sort(Y, Y + y);
    game(X, Y, x, y, n);
}