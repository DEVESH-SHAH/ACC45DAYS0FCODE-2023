#include<bits/stdc++.h>
using namespace std;

void binsearch(int arr[],int k,int first,int last)
{
    int mid;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(arr[mid]==k)
        break;
        else if(arr[mid]>k)
        {
        last=mid-1;
        binsearch(arr,k,first,last);
        }
        else
        {
            first=mid+1;
            binsearch(arr,k,first,last);
        }
        
    }
    if(first<=last)
        {
            cout<<"Found"<<endl;
        }
        else
        cout<<"Not Found"<<endl;}
int main()
{
    int n=5;
    int first=0;
    int last=n-1;
    int arr[n]={12,34,45,76,87};
    int k=46;
    binsearch(arr,k,first,last);
    return 0;
}