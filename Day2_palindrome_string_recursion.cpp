#include<bits/stdc++.h>
using namespace std;
bool pal(int i,string g)
{
    if(i>=g.size()/2)
    return true;
    if(g[i]!=g[g.size()-1-i])
    return false; 
    return pal(i+1,g);
}
int main()
{
 int i=0;
 string s="MADSM";
 cout<<pal(i,s);
}
