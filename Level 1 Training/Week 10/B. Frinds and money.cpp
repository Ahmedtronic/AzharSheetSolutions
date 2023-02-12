#include<cmath>
#include <iostream>
#include<algorithm>
#include <vector>
#include<map>
#include<stack>
#include<queue>
#include<deque>
using namespace std;
#define ll long long
    /// وَاصْبِرْ لِحُكْمِ رَبِّكَ فَإِنَّكَ بِأَعْيُنِنَا ❤  ////

int main()
{
    int n, q;
    cin >> n >> q;
    map <string, ll> money;
    
    string name;
    ll amount;
    for (int i = 0; i < n ; i++)
    {
        cin >> name >> amount;
        money[name] = amount;
    }
    
    int num;
    while (q--)
    {
        cin >> num;
        cin >> name;
        if (num == 1)
        {
            ll x;
            cin >> x;
            money[name]+= x;
        }
        else cout << money[name] << endl;
        
    }
    
}
