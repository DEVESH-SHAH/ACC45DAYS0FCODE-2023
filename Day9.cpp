#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,e,f;
      cin>>a>>b>>c>>d>>e>>f;
      a*=f;
      b*=f;
      c*=f;
      d*=f;
      e*=f;
      int sum=a+b+c+d+e;
      if(sum<=(5*24))
      cout<<"No"<<endl;
      else
      cout<<"Yes"<<endl;
	}
	return 0;
}
