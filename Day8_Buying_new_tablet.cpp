#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,b;
	    cin>>n>>b;
	    int x,y,z;
	    int max=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x>>y>>z;
	        if(z>b)
	        continue;
	        else
	        {
	            if(max<(x*y))
	            max=x*y;
	        }
	    }
	    if(max==0)
	    {
	        cout<<"no tablet"<<endl;
	    }
	    else
	    cout<<max<<endl;
	}
	return 0;
}
