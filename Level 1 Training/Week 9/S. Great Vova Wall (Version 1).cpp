#include <iostream>
#include<bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define clr(x,val) memset(x , val ,sizeof(x))
#define pb push_back
using namespace std;

int main() 
{
 ll n  , a;
 stack<ll>st;
 cin>>n;
    while (n--)
    {
        cin>>a;
        if(st.empty())
            st.push(a);

        else
        {
            if((a+st.top())%2==0)
            {
                st.pop();
            }
            else
                st.push(a);
        }
    }
    
    if(st.size()<=1)
        cout<<"YES";
    else
        cout<<"NO";

}
