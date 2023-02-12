#include<cmath>
#include <iostream>
#include<algorithm>
#include <vector>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include <map>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    /// وَاصْبِرْ لِحُكْمِ رَبِّكَ فَإِنَّكَ بِأَعْيُنِنَا ❤  ////



// pq sorts from bigger to smaller

int main()
{
    fast;
    int n, q;
    cin >> n >> q;
    
    vector<int> v;
    for ( int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    
    while (q--)
    {
        string s;
        cin >> s;
        if ( s == "binary_search")
        {
            int x;
            cin >> x;
            if (binary_search(v.begin(),v.end(), x))
            {
                cout << "found" << endl;
            }
            else
            {
                cout << "not found" << endl;
            }
        }
        
        else if ( s == "lower_bound")
        {
            int x;
            cin >> x;
            
            auto result = lower_bound(v.begin(), v.end(), x);
            if (result == v.end())
            {
                cout << -1 << endl;
            }
            else cout << v[int(result-v.begin())] << endl;
        }
        else if ( s== "upper_bound")
        {
            int x;
            cin >> x;
            
            auto result = upper_bound(v.begin(), v.end(), x);
            if (result == v.end())
            {
                cout << -1 << endl;
            }
            else cout << v[int(result-v.begin())] << endl;
        }
    }
    
}
