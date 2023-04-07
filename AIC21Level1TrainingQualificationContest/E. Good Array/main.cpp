#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==3 || arr[i]==1)
        {
            cout<<"Bad";
            return 0;
        }
    }
    cout<<"Good"<<endl;
    return 0;
}
