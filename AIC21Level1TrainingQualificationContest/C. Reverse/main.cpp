#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        cout<<n%10<<endl;
        n/=10;
    }
    return 0;
}
