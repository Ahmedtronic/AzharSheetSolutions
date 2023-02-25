#include<cmath>
#include <iostream>
#include<algorithm>
#include <vector>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<unordered_map>
#include <map>
using namespace std;
#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define clear1(x) memset(x,-1,sizeof(x))
#define clear0(x) memset(x,0,sizeof(x))

/// وَاصْبِرْ لِحُكْمِ رَبِّكَ فَإِنَّكَ بِأَعْيُنِنَا ❤  ////


int main()
{
    fast;
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, m,k;
        cin >> n >> m >> k;
        
        vector<ll>arr(n);
        vector<ll>s;
        priority_queue<ll, vector<ll>,greater<ll> >q;
        
        
        for (int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            q.push(arr[i]);
            
            if (q.size() == m)
            {
                s.push_back(q.top());
                q.pop();
            }
        }
        
        while (!q.empty())
        {
            s.push_back(q.top());
            q.pop();
        }
              
        cout << s[k-1] << "\n";
    
    }
}
