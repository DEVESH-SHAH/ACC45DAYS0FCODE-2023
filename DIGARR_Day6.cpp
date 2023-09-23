#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0' || s[i]=='5')
            {cout<<"yes"<<endl;
            cnt++;
            break;}
        }
        if(cnt==0)
        cout<<"no"<<endl;
    }
	return 0;
}
