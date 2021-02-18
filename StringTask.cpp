#include <bits/stdc++.h>
#include <string>
using namespace std;
void Convert(string S)
{
transform(S.begin(),S.end(),S.begin(),::tolower);
string K="";
string::iterator it;
for(it=S.begin();it!=S.end();it++)
{
if(*it=='a'||*it=='e'||*it=='i'||*it=='o'||*it=='u'||*it=='y')
continue;
else
K=K+"."+*it;
}
cout<<K;
}
int main()
{
string T;
getline(cin,T);
Convert(T);
return 0;
}