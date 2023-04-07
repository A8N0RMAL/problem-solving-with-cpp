#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,m=0;
    for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
                a++;
            else
                m++;
        }
        if(a>m)
            cout<<"Ahmed"<<endl;
        else if(a<m)
            cout<<"Mostafa"<<endl;
        else
            cout<<"Friendship"<<endl;

    return 0;
}
