#include <bits/stdc++.h>
#define long long long int
using namespace std;
int calculate(int i,int j)
{
if(i==0)
return j;
return calculate(i-1,i-j);
}

int main()
{
    cout<<calculate(2,4);

    return 0;
}
