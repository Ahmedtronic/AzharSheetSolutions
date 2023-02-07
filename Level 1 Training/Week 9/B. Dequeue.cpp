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
    int q;
    cin >> q;
    
    deque<long long> dq;
    while (q--)
    {
        string s;
        cin >> s;
        if ( s == "front") cout << dq.front() << endl;
        else if ( s == "back") cout << dq.back() << endl;
        else if (s == "push_back")
        {
            ll x;
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "push_front")
        {
            ll x;
            cin >> x;
            dq.push_front(x);
        }
        else if (s == "print")
        {
            int x;
            cin >> x;
            cout << dq[x-1] << endl;
        }
        else if (s == "pop_front")
        {
            dq.pop_front();
        }
        else if (s == "pop_back")
        {
            dq.pop_back();
        }
    }
    
}
