#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int arr[N];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
       
        for(int i=0;i<N;i++)
            arr[i]=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            arr[a[i]]++;
        }   

        int maxFreq=0;
        for(int i=0;i<N;i++)
            maxFreq=max(arr[i],maxFreq);

        cout<<(n-maxFreq)<<endl;
    }
}
