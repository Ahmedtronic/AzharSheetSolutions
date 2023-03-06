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



ll check(ll x)
{
    return ((x * (x + 1)) / 2);
}

int main()
{
    
    fast;
    ll q;
    cin >> q;
    while (q--)
    {
        ll l = 1, r = 2000000000, n, ans = -1;
        cin >> n;
        while (l <= r)
        {
            ll mid = l+(r-l)/2;
            
            if (check(mid) >= n)
            {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << ans << endl;
    }
}
