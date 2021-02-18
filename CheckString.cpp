#include <bits/stdc++.h>
using namespace std;
void Check(string S)
{
string K="hello";
string::iterator it;
string::iterator it1;
it=K.begin();
int l=0;
for(it1=S.begin();it1!=S.end();++it1)
{
if(*it1==*it)
{
l++;
it++;
}
if(l==5)
break;
}
if(l==5)
cout<<"YES";
else
cout<<"NO";
}
int main()
{
string T;
getline(cin,T);
Check(T);
return 0;
}