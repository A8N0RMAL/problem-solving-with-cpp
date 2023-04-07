#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b && b>=c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
